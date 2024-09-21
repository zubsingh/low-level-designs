//
// Created by zobin on 9/19/24.
//

#ifndef LOCATIONINTERFACE_H
#define LOCATIONINTERFACE_H

class Threatre;

class LocationInterface {
public:
    virtual ~LocationInterface() = default;

    virtual void addThreatre(std::shared_ptr<Threatre> threatre) = 0;
    virtual std::shared_ptr<Threatre> getTheatreByName(std::string threatreName) = 0;
};

#endif //LOCATIONINTERFACE_H
