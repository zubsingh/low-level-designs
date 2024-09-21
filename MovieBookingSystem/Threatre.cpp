//
// Created by zobin on 9/19/24.
//

#include "Threatre.h"

Threatre::Threatre(std::string ThreatreName) : ThreatreName(ThreatreName){}

std::string Threatre::getThreatreName() {
    return this->ThreatreName;
}

void Threatre::addHall (std::shared_ptr<Hall> hall) {
    halls_[hall->getHallName()] = hall;
}

std::shared_ptr<Hall> Threatre::getHall(std::string hallName) {
    auto it = halls_.find(hallName);
    if (it != halls_.end()) {
        return it->second;
    }
    return nullptr;
}