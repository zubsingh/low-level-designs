//
// Created by zobin on 9/20/24.
//

#include "Movie.h"

Movie::Movie(std::string movieName) : movieName(movieName) {}

std::string Movie::getMovieName() {
    return this->movieName;
}

void Movie::addShowSlot(int startTime,int endTime) {
    this->movieSlots.emplace_back(startTime,endTime);
}

bool Movie::isMovieSlotAvailable(int startTime,int endTime) const {
    for (const auto& movieSlot : movieSlots) {
        if (startTime >= movieSlot.first && endTime <= movieSlot.second) {
            return true;
        }
    }
    return false;
}