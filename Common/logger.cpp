#include <boost/log/utility/setup.hpp>
#include <boost/log/utility/setup/file.hpp>

#include "logger.h"


Logger& Logger::instance()
{
    static Logger logger;
    return logger;
}


void Logger::setOptions(std::string const& t_fileName, unsigned t_rotationSize,
    unsigned t_maxSize)
{
    boost::log::add_file_log(
        boost::log::keywords::file_name = t_fileName,
        boost::log::keywords::rotation_size = t_rotationSize,
        boost::log::keywords::max_size = t_maxSize,
        boost::log::keywords::time_based_rotation 
            = boost::log::sinks::file::rotation_at_time_point(0, 0, 0),
        boost::log::keywords::format = "[%TimeStamp%]: %Message%",
        boost::log::keywords::auto_flush = true
        );

    boost::log::add_common_attributes();
}
