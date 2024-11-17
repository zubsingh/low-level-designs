//
// Created by zobin on 10/1/24.
//

#include "Request.h"

Request::Request(int pickupFloor, int destinationFloor, Direction direction) : pickupFloor(pickupFloor), destinationFloor(destinationFloor), direction_(direction){}

int Request::getPickupFloor() const {
    return this->pickupFloor;
}

int Request::getDestinationFloor() const {
    return this->destinationFloor;
}

Direction Request::getDirection() {
    return this->direction_;
}