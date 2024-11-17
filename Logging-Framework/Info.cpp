//
// Created by zobin on 10/24/24.
//

#include "Info.h"

#include <iostream>

void Info::log(const LOGTYPE& logType, const std::string& message){
    if (logType == LOGTYPE::INFO) {
        std::cout << "#LOG:: Info" << message;
    } else {
        this->nextHandler(this->log_handler);
    }
}
