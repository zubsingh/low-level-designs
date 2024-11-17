//
// Created by zobin on 11/17/24.
//

#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <vector>

class Course {
    std::string courseCode;
    std::string subject;
    std::string instructorId;
    int durationInWeeks;
    int maxCapacityForCourse;
    int currentEnrolledStudent;
    std::vector<int> studentsEnrolled;

public:
    explicit Course(std::string courseCode,std::string subject, std::string instructorId, int durationInWeeks, int maxCapacityForCourse);
    void doEnrollment(int studentId);
    int getEnrolledCount();
    int getMaxCapacityForCourse();
    std::string getCourseCode();
};



#endif //COURSE_H
