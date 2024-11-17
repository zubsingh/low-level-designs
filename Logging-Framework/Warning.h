//
// Created by zobin on 10/24/24.
//

#ifndef WARNING_H
#define WARNING_H
#include "LogHandler.h"

class Warning : public LogHandler{
public:
    void log(const LOGTYPE& logType, const std::string& message);
};

#endif //WARNING_H
