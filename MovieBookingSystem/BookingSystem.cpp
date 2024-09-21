//
// Created by zobin on 9/20/24.
//

#include "BookingSystem.h"
#include "Location.h"
#include "Reservation.h"
#include "Hall.h"
#include "Threatre.h"

void BookingSystem::addLocation(std::shared_ptr<Location> location) {
    locations_[location->getLocationName()] = location;
}

std::shared_ptr<Location> BookingSystem::getLocation(const std::string& locationName) {
    auto it = locations_.find(locationName);
    if (it != locations_.end()) {
        return it->second;
    }
    return nullptr;
}

BookingStatus BookingSystem::createReservation(
                                                const std::string& movieName,
                                                const std::string& locationName,
                                               const std::string& theatreName,
                                               const std::string& hallName,
                                               std::shared_ptr<User> user,
                                               int showStartTime,
                                               const std::vector<int>& seatNumbers) {
    // Find Location
    auto location = getLocation(locationName);
    if (!location) {
        return BookingStatus::LOCATION_NOT_FOUND;
    }

    // Find Theatre
    auto theatre = location->getTheatreByName(theatreName);
    if (!theatre) {
        return BookingStatus::THEATRE_NOT_FOUND;
    }

    // Find Hall
    auto hall = theatre->getHall(hallName);
    if (!hall) {
        return BookingStatus::HALL_NOT_FOUND;
    }

    // Book seats for the requested movie and showtime
    BookingStatus status = hall->bookSeats(movieName, showStartTime, seatNumbers);
    if (status != BookingStatus::SUCCESS) {
        return status;
    }

    // Get the movie object for the reservation (already checked in `bookSeats`)
    auto movie = hall->getMovieByName(movieName);
    if (!movie) {
        return BookingStatus::MOVIE_NOT_FOUND;
    }

    // Create Reservation
    auto reservation = std::make_shared<Reservation>(user, movie, showStartTime, hall, seatNumbers);
    user->addReservation(reservation);

    return BookingStatus::SUCCESS;
}
