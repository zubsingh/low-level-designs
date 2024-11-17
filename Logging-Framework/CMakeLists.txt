cmake_minimum_required(VERSION 3.28)
project(Logging_Framework)

set(CMAKE_CXX_STANDARD 20)

add_executable(Logging_Framework main.cpp
        LogHandler.h
        Debug.cpp
        Debug.h
        Common.h
        Warning.cpp
        Warning.h
        Error.cpp
        Error.h
        Fatal.cpp
        Fatal.h
        Info.cpp
        Info.h)
