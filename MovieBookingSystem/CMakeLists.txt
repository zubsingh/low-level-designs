cmake_minimum_required(VERSION 3.28)
project(MovieBookingSystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(MovieBookingSystem main.cpp
        User.cpp
        User.h
        LocationInterface.h
        Location.cpp
        Location.h
        ThreatreInterface.h
        Threatre.cpp
        Threatre.h
        HallInterface.h
        Hall.cpp
        Hall.h
        SeatInterface.h
        Seats.cpp
        Seats.h
        UserInterface.h
        MovieInterface.h
        Movie.cpp
        Movie.h
        Reservation.cpp
        Reservation.h
        BookingSystem.cpp
        BookingSystem.h
        BookingStatus.h
)
