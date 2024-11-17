//
// Created by zobin on 10/24/24.
//

#include "Fatal.h"

#include <iostream>

void Fatal::log(const LOGTYPE& logType, const std::string& message){
    if (logType == LOGTYPE::ERROR){
        std::cout << "#LOG:: Debug" << message;
    } else {
        this->nextHandler(this->log_handler);
    }
}
