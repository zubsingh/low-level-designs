//
// Created by zobin on 11/17/24.
//

#ifndef REGISTRATIONSYSTEM_H
#define REGISTRATIONSYSTEM_H
#include <memory>
#include <unordered_map>

#include "Course.h"
#include "Student.h"


class RegistrationSystem {
    std::unordered_map<std::string, std::shared_ptr<Course>> courses;
    std::unordered_map<int, std::shared_ptr<Student>> students;
public:
    RegistrationSystem();
    void addCourse(std::shared_ptr<Course> course);
    void addStudent(std::shared_ptr<Student> student);
    bool registerCourse(int studentID, std::string courseCode);

    void searchStudentInfo(int studentID);
};



#endif //REGISTRATIONSYSTEM_H
