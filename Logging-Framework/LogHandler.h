//
// Created by zobin on 10/21/24.
//

#ifndef LOGHANDLER_H
#define LOGHANDLER_H
#include <memory>

#include "Common.h"

class LogHandler{
protected:
    std::shared_ptr<LogHandler> log_handler;
public:
    virtual ~LogHandler() = default;
    virtual void nextHandler(std::shared_ptr<LogHandler> log_handler) {
        this->log_handler = log_handler;
    }

    virtual void log(const LOGTYPE& logType, const std::string& message) = 0;
};

#endif //LOGHANDLER_H
