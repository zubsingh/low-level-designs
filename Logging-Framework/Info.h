//
// Created by zobin on 10/24/24.
//

#ifndef INFO_H
#define INFO_H
#include "LogHandler.h"

class Info : public LogHandler{
public:
    void log(const LOGTYPE& logType, const std::string& message);
};



#endif //INFO_H
