#include <iostream>

#include "RegistrationSystem.h"

int main() {
    auto regSystem = std::make_shared<RegistrationSystem>();
    regSystem->addCourse(std::make_shared<Course>("C501", "Maths","I201",5,50));
    regSystem->addCourse(std::make_shared<Course>("C502", "English","I202",6,50));


    regSystem->addStudent(std::make_shared<Student>(1,"rakesh"));
    regSystem->addStudent(std::make_shared<Student>(2,"ricky"));

    regSystem->registerCourse(2,"C501");


    return 0;
}
