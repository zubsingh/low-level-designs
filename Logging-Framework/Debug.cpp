//
// Created by zobin on 10/21/24.
//

#include "Debug.h"

#include <iostream>

void Debug::log(const LOGTYPE& logType, const std::string& message){
    if (logType == LOGTYPE::DEBUG){
        std::cout << "#LOG:: Debug" << message;
    } else {
        this->nextHandler(this->log_handler);
    }
}
