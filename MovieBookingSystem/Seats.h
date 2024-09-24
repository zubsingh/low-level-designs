//
// Created by zobin on 9/20/24.
//

#ifndef SEATS_H
#define SEATS_H
#include <unordered_map>

#include "BookingStatus.h"
#include "SeatInterface.h"

#include <mutex>
#include <vector>


class Seats : public SeatInterface{
    int totalSeats;
    std::vector<bool> seatAvailability; // true if booked
    //std::mutex seatsMutex;
    std::vector<std::mutex> seatLocks;   // One mutex per seat

    // Seat-Level Locking (Fine-Grained Locking)
    // You can introduce a lock for each seat, so when a user tries to book a seat, only that specific seat is locked.
    // This minimizes contention between threads that are trying to book different seats.

public:
    Seats(int totalSeats);
    BookingStatus bookSeats(const std::vector<int>& seatNumbers);
};



#endif //SEATS_H
