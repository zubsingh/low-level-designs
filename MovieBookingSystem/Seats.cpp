//
// Created by zobin on 9/20/24.
//

#include "Seats.h"

Seats::Seats(int totalSeats) : totalSeats(totalSeats), seatAvailability(totalSeats, false) , seatLocks(totalSeats){}

BookingStatus Seats::bookSeats(const std::vector<int>& seatNumbers) {
    //std::lock_guard<std::mutex> lock(seatsMutex);
    std::vector<std::unique_lock<std::mutex>> locks;  // To store locks for the requested seats

    // Check seat availability
    for (int seatNumber : seatNumbers) {
        if (seatNumber < 1 || seatNumber > totalSeats) {
            return BookingStatus::INVALID_SEAT_NUMBER;
        }

        // Lock each seat individually
        locks.emplace_back(seatLocks[seatNumber-1]);

        if (seatAvailability[seatNumber - 1]) {
            return BookingStatus::SEAT_ALREADY_BOOKED;
        }
    }

    // Book seats
    for (int seatNumber : seatNumbers) {
        seatAvailability[seatNumber - 1] = true;
    }

    return BookingStatus::SUCCESS;
}

