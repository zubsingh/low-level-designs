//
// Created by zobin on 9/19/24.
//

#ifndef THREATRE_H
#define THREATRE_H

#include <memory>
#include <string>

#include "Hall.h"
#include "ThreatreInterface.h"

class Threatre : public ThreatreInterface{
    std::string ThreatreName;
    std::unordered_map<std::string, std::shared_ptr<Hall>> halls_;
public:
    explicit Threatre(std::string ThreatreName);

    std::string getThreatreName();
    void addHall(std::shared_ptr<Hall> hall) override;
    std::shared_ptr<Hall> getHall(std::string name) override;
};



#endif //THREATRE_H
