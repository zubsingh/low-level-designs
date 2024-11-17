//
// Created by zobin on 11/17/24.
//

#include "Course.h"

Course::Course(std::string courseCode,std::string subject, std::string instructorId, int durationInWeeks, int maxCapacityForCourse) {
    this->courseCode = courseCode;
    this->subject = subject;
    this->instructorId = instructorId;
    this->durationInWeeks = durationInWeeks;
    this->maxCapacityForCourse = maxCapacityForCourse;
}

void Course::doEnrollment(int studentId) {
    this->studentsEnrolled.push_back(studentId);

    currentEnrolledStudent++;
}

int Course::getEnrolledCount() {
  return  this->currentEnrolledStudent;
}

int Course::getMaxCapacityForCourse() {
    return this->maxCapacityForCourse;
}

std::string Course::getCourseCode() {
    return this->courseCode;
}