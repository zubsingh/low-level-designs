cmake_minimum_required(VERSION 3.28)
project(Elevator_System)

set(CMAKE_CXX_STANDARD 20)

add_executable(Elevator_System main.cpp
        Elevator.cpp
        Elevator.h
        User.cpp
        User.h
        ElevatorSystem.cpp
        ElevatorSystem.h
        Request.cpp
        Request.h
        CommonAll.h)
