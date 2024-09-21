//
// Created by zobin on 9/20/24.
//

#ifndef SEATINTERFACE_H
#define SEATINTERFACE_H
#include <vector>

class SeatInterface {
public:
    virtual ~SeatInterface() = default;

    BookingStatus bookSeats(const std::vector<int>& seatNumbers);
};
#endif //SEATINTERFACE_H
