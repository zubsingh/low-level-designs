//
// Created by zobin on 11/17/24.
//

#include "RegistrationSystem.h"

#include <memory>
#include "CourseCode.h"

RegistrationSystem::RegistrationSystem() {
}

void RegistrationSystem::addCourse(std::shared_ptr<Course> course) {
    this->courses[course->getCourseCode()] = course;
}

void RegistrationSystem::addStudent(std::shared_ptr<Student> student) {
    this->students[student->getId()] = student;
}

bool RegistrationSystem::registerCourse(int studentID, std::string courseCode) {
    if (this->students.find(studentID) != this->students.end() && this->courses.find(courseCode) != this->courses.end()) {
        auto course = this->courses[courseCode];
        if (course->getEnrolledCount() < course->getMaxCapacityForCourse()) {
            course->doEnrollment(studentID);
            return true;
        }
    }

    return false;
}

void RegistrationSystem::searchStudentInfo(int studentID) {

}