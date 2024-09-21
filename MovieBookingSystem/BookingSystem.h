//
// Created by zobin on 9/20/24.
//

#ifndef BOOKINGSYSTEM_H
#define BOOKINGSYSTEM_H

#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

#include "BookingStatus.h"
#include "User.h"


class Location;

class BookingSystem {
    std::unordered_map<std::string, std::shared_ptr<Location>> locations_;
public:
    BookingStatus createReservation( const std::string& movieName,
                                    const std::string& locationName,
                                    const std::string& theatreName,
                                    const std::string& hallName,
                                    std::shared_ptr<User> user,
                                    int showStartTime,
                                    const std::vector<int>& seatNumbers);

    void addLocation(std::shared_ptr<Location> location);
    std::shared_ptr<Location> getLocation(const std::string& locationName);
};


#endif //BOOKINGSYSTEM_H
