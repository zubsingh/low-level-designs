//
// Created by zobin on 9/20/24.
//

#include "Hall.h"

#include <utility>

Hall::Hall(std::string hallName,std::shared_ptr<Seats> seats_obj) : hallName(std::move(hallName)), seats_obj(seats_obj){}

std::string Hall::getHallName() {
    return this->hallName;
}

std::shared_ptr<Seats> Hall::getSeatsObj() {
   return this->seats_obj;
}

std::shared_ptr<Movie> Hall::getMovieByName(const std::string& movieName) {
    auto it = movieSchedule.find(movieName);
    if (it != movieSchedule.end()) {
        return it->second;
    }
    return nullptr;  // Movie not found
}

void Hall::addMovie(std::shared_ptr<Movie> movie) {
    this->movieSchedule[movie->getMovieName()] = movie;
}

BookingStatus Hall::bookSeats(const std::string& movieName, int startTime, const std::vector<int>& seatNumbers) {
    // Find the movie by name
    auto movie = getMovieByName(movieName);
    if (!movie) {
        return BookingStatus::MOVIE_NOT_FOUND;
    }

    // Check if the movie has a slot available at the requested time
    int endTime = startTime + (seatNumbers.size() * 30);  // Example logic, end time based on seat numbers
    if (!movie->isMovieSlotAvailable(startTime, endTime)) {
        return BookingStatus::SHOWTIME_NOT_FOUND;
    }

    // Proceed with seat booking if the time slot is available
    return seats_obj->bookSeats(seatNumbers);
}