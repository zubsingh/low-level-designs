//
// Created by zobin on 9/20/24.
//

#include "Seats.h"

Seats::Seats(int totalSeats) : totalSeats(totalSeats), seatAvailability(totalSeats, false) {}

BookingStatus Seats::bookSeats(const std::vector<int>& seatNumbers) {
    std::lock_guard<std::mutex> lock(seatsMutex);

    // Check seat availability
    for (int seatNumber : seatNumbers) {
        if (seatNumber < 1 || seatNumber > totalSeats) {
            return BookingStatus::INVALID_SEAT_NUMBER;
        }
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

