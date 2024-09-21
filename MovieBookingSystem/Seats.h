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
    std::mutex seatsMutex;

public:
    Seats(int totalSeats);
    BookingStatus bookSeats(const std::vector<int>& seatNumbers);
};



#endif //SEATS_H
