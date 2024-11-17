//
// Created by zobin on 10/24/24.
//

#include "Warning.h"

#include <iostream>


void Warning::log(const LOGTYPE& logType, const std::string& message){
    if (logType == LOGTYPE::WARNING) {
        std::cout << "#LOG:: Warning" << message;
    } else {
        this->nextHandler(this->log_handler);
    }
}
