//
// Created by zobin on 11/17/24.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>


class Person {
    int id;
    std::string name;
public:
    Person(int id, std::string name) : id(id), name(name){}
    ~Person() = default;

    int getId() {
        return this->id;
    }

    std::string getName() {
        return this->name;
    }
};



#endif //PERSON_H
