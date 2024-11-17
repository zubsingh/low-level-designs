//
// Created by zobin on 10/1/24.
//

#ifndef ELEVATOR_H
#define ELEVATOR_H
#include <memory>

#include "Request.h"


enum class Direction;

class Elevator {
private:
    int currentElevatorID;
    int currentFloor;
    Direction current_direction_;
    std::shared_ptr<Request> currentRequest;
    int currentCapacity;

public:
    explicit Elevator(int currentElevatorID);
    int getCurrentFloor() const;
    int getCurrentElevatorID() const;
    Direction getCurrentDirection();
    void setDirection(Direction direction);

    void processRequest(std::shared_ptr<Request> currentRequest);
    int getCurrentCapacity();
};



#endif //ELEVATOR_H
