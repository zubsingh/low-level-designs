//
// Created by zobin on 9/19/24.
//

#ifndef LOCATION_H
#define LOCATION_H
#include <list>
#include <memory>
#include "LocationInterface.h"


class Threatre;

class Location : public LocationInterface{
    std::string locationName;
    std::list<std::shared_ptr<Threatre>> threatres_;
public:
    explicit Location(std::string& locationName);
    void addThreatre(std::shared_ptr<Threatre> threatre) override;
    std::shared_ptr<Threatre> getTheatreByName(std::string threatreName) override;
    std::string getLocationName() const;
};

#endif //LOCATION_H
