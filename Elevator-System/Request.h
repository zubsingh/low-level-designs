//
// Created by zobin on 10/1/24.
//

#ifndef REQUEST_H
#define REQUEST_H

#include "CommonAll.h"

class Request {
protected:
    int pickupFloor;
    int destinationFloor;
    Direction direction_;
public:
    explicit Request(int pickupFloor, int destinationFloor, Direction direction);
    int getPickupFloor() const;
    int getDestinationFloor() const;
    Direction getDirection();

};



#endif //REQUEST_H
