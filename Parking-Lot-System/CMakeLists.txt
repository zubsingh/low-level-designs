cmake_minimum_required(VERSION 3.28)
project(Parking_Lot_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(Parking_Lot_System main.cpp
        Slot.h
        TwoWheelerSlot.cpp
        TwoWheelerSlot.h
        VehicleType.h
)
