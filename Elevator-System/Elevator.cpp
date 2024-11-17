//
// Created by zobin on 10/1/24.
//

#include "Elevator.h"

#include <iostream>

Elevator::Elevator(int currentElevatorID) : currentFloor(0), currentElevatorID(currentElevatorID), current_direction_(Direction::IDLE) ,currentCapacity(0) {}

int Elevator::getCurrentFloor() const {
    return currentFloor;
}

int Elevator::getCurrentElevatorID() const {
    return currentElevatorID;
}

Direction Elevator::getCurrentDirection() {
    return current_direction_;
}

void Elevator::setDirection(Direction direction) {
    this->current_direction_ = direction;
}

void Elevator::processRequest(std::shared_ptr<Request> currentRequest) {
    if (currentCapacity <= MAX_CAPACITY) {
    }
    else {
        std::cout << "MAX capacity reached\n";
    }
}

int Elevator::
int Elevator::getCurrentCapacity(){
    return this->currentCapacity;
}
