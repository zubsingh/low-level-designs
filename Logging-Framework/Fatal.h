//
// Created by zobin on 10/24/24.
//

#ifndef FATAL_H
#define FATAL_H

#include "LogHandler.h"

class Fatal : public LogHandler{
public:
    void log(const LOGTYPE& logType, const std::string& message);
};




#endif //FATAL_H
