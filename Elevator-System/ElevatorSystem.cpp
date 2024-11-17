//
// Created by zobin on 10/1/24.
//

#include "ElevatorSystem.h"

void ElevatorSystem::registerElevator(std::shared_ptr<Elevator> elevator) {
    elevators.push_back(elevator);
}

bool ElevatorSystem::useElevator(std::shared_ptr<Request> request, std::shared_ptr<Elevator> elevator) {
    bool getElevator = false;

    std::shared_ptr<Elevator> choosenElevator;

    for (auto elevator : elevators) {
        if (request->getDirection() == elevator->getCurrentDirection() && request->getPickupFloor() > elevator->getCurrentFloor()) {
            choosenElevator = elevator;
            getElevator = true;
        }else if (getElevator == false && elevator->getCurrentDirection() == Direction::IDLE) {
            choosenElevator = elevator;
            getElevator = true;
        }

    }

    if (getElevator) {
        choosenElevator->processRequest(request);
        return true;
    }
    return false;
}
