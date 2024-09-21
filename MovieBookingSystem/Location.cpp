//
// Created by zobin on 9/19/24.
//

#include "Location.h"

#include "Threatre.h"

Location::Location(std::string& locationName) : locationName(locationName){}

void Location::addThreatre(std::shared_ptr<Threatre> threatre) {
    this->threatres_.push_back(threatre);
}

std::shared_ptr<Threatre> Location::getTheatreByName(std::string threatreName){
    for (auto threatre : this->threatres_) {
        if (threatre->getThreatreName() == threatreName) {
            return threatre;
        }
    }
    return nullptr;
 }

std::string Location::getLocationName() const{
    return this->locationName;
}