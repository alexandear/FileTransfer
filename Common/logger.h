#pragma once

#include <string>


class Logger
{
    Logger() {}
public:
    static Logger& instance();
    static void setOptions(std::string const& t_fileName, unsigned t_rotationSize,
        unsigned t_maxSize);
};