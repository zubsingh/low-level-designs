cmake_minimum_required(VERSION 3.28)
project(Course_Registration_System)

set(CMAKE_CXX_STANDARD 20)

add_executable(Course_Registration_System main.cpp
        RegistrationSystem.cpp
        RegistrationSystem.h
        Person.h
        Course.cpp
        Course.h
        Student.cpp
        Student.h
        Instructor.cpp
        Instructor.h
        CourseCode.h)
