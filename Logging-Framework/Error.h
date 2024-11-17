//
// Created by zobin on 10/24/24.
//

#ifndef ERROR_H
#define ERROR_H
#include "LogHandler.h"

class Error : public LogHandler{
public:
    void log(const LOGTYPE& logType, const std::string& message);
};



#endif //ERROR_H
