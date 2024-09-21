//
// Created by zobin on 9/20/24.
//

#include "Reservation.h"
#include "User.h"
#include "Movie.h"
#include "Hall.h"
#include <iostream>

int Reservation::reservationCounter = 0;

Reservation::Reservation(std::shared_ptr<User> user,
                         std::shared_ptr<Movie> movie,
                         int showStartTime,
                         std::shared_ptr<Hall> hall,
                         const std::vector<int>& seatNumbers)
    : user(user),
      movie(movie),
      showStartTime(showStartTime),
      hall(hall),
      seatNumbers(seatNumbers)
{
    reservationID = ++reservationCounter;
}

int Reservation::getReservationID() const {
    return reservationID;
}

void Reservation::printReceipt() const {
    std::cout << "----- Reservation Receipt -----" << std::endl;
    std::cout << "Reservation ID: " << reservationID << std::endl;
    std::cout << "User: " << user->getName() << std::endl;
    std::cout << "Movie: " << movie->getMovieName() << std::endl;
    std::cout << "Show Time: " << showStartTime << std::endl;
    std::cout << "Hall: " << hall->getHallName() << std::endl;
    std::cout << "Seats: ";
    for (int seatNumber : seatNumbers) {
        std::cout << seatNumber << " ";
    }
    std::cout << std::endl;
    std::cout << "------------------------------" << std::endl;
}