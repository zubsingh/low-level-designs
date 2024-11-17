//
// Created by zobin on 10/1/24.
//

#ifndef ELEVATORSYSTEM_H
#define ELEVATORSYSTEM_H
#include <vector>

#include "Elevator.h"

class ElevatorSystem {
protected:
    std::vector<std::shared_ptr<Elevator>> elevators;
public:
    void registerElevator(std::shared_ptr<Elevator> elevator) ;
    bool useElevator(std::shared_ptr<Request> request,std::shared_ptr<Elevator> elevator);

};

#endif //ELEVATORSYSTEM_H
