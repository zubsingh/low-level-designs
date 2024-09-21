//
// Created by zobin on 9/19/24.
//

#ifndef THREATREINTERFACE_H
#define THREATREINTERFACE_H

class ThreatreInterface {
public:
    virtual ~ThreatreInterface() = default;

    virtual void addHall(std::shared_ptr<Hall> hall) = 0;
    virtual std::shared_ptr<Hall> getHall(std::string name) =0;
};

#endif //THREATREINTERFACE_H
