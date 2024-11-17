//
// Created by zobin on 10/21/24.
//

#ifndef DEBUG_H
#define DEBUG_H
#include "LogHandler.h"


class Debug : public LogHandler{
public:
     void log(const LOGTYPE& logType, const std::string& message);
};



#endif //DEBUG_H
