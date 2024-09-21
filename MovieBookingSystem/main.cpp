#include <iostream>
#include <memory>
#include <thread>

#include "BookingSystem.h"
#include "Location.h"
#include "Threatre.h"
#include "Movie.h"
#include "User.h"

void handleBookingFailure(BookingStatus status) {
    switch (status) {
        case BookingStatus::LOCATION_NOT_FOUND:
            std::cout << "Location not found." << std::endl;
        break;
        case BookingStatus::THEATRE_NOT_FOUND:
            std::cout << "Theatre not found." << std::endl;
        break;
        case BookingStatus::HALL_NOT_FOUND:
            std::cout << "Hall not found." << std::endl;
        break;
        case BookingStatus::SHOWTIME_NOT_FOUND:
            std::cout << "Showtime not found." << std::endl;
        break;
        case BookingStatus::SEAT_ALREADY_BOOKED:
            std::cout << "One or more seats are already booked." << std::endl;
        break;
        case BookingStatus::INVALID_SEAT_NUMBER:
            std::cout << "Invalid seat number." << std::endl;
        break;
        default:
            std::cout << "Booking failed due to an unknown error." << std::endl;
        break;
    }
}


// Function to simulate a seat booking
void bookSeats(BookingSystem& bookingSystem, std::shared_ptr<User> user, const std::string& movieName, const std::string& locationName, const std::string& theatreName, const std::string& hallName, int startTime, const std::vector<int>& seatNumbers) {
    BookingStatus status = bookingSystem.createReservation(movieName, locationName, theatreName, hallName, user, startTime, seatNumbers);

    if (status == BookingStatus::SUCCESS) {
        std::cout << user->getName() << " successfully booked seats." << std::endl;
    } else {
        std::cout << user->getName() << " failed to book seats." << std::endl;
    }
}

int main() {
    BookingSystem bookingSystem;

    std::string city1 = "Haifa";
    auto location = std::make_shared<Location>(city1);

    auto theatre1 = std::make_shared<Threatre>("MovieLand Theatre");

    auto hall1Seats = std::make_shared<Seats>(100);
    auto hall1 = std::make_shared<Hall>("Hall1",hall1Seats);

    auto hall2Seats = std::make_shared<Seats>(80);
    auto hall2 = std::make_shared<Hall>("Hall2",hall2Seats);

    theatre1->addHall(hall1);
    theatre1->addHall(hall2);

    auto tigerMovie = std::make_shared<Movie>("Tiger");
    tigerMovie->addShowSlot(1200, 1500);
    tigerMovie->addShowSlot(1600, 2000);

    hall1->addMovie(tigerMovie);

    location->addThreatre(theatre1);
    bookingSystem.addLocation(location);


    auto user1 = std::make_shared<User>("Sam", 21);
    auto user2 = std::make_shared<User>("Jane", 30);

    // Launch threads for simultaneous bookings
    std::thread t1(bookSeats, std::ref(bookingSystem), user1, "Tiger", "Haifa", "MovieLand Theatre", "Hall1", 1200, std::vector<int>{21, 22});
    std::thread t2(bookSeats, std::ref(bookingSystem), user2, "Tiger", "Haifa", "MovieLand Theatre", "Hall1", 1200, std::vector<int>{21, 23});

    // Wait for both threads to finish
    t1.join();
    t2.join();

}
