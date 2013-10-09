#ifndef OPENDTP_LOGGING_H_
# define OPENDTP_LOGGING_H_

# include <iostream>
# include <fstream>
# include <string>
# include <ctime>

# define LOG_FILE "/tmp/opendtp.log"

class OpenDTPLogging
{
public:
    static OpenDTPLogging& getInstance()
    {
        static OpenDTPLogging    instance;
        return instance;
    }
    void info(const std::string &);
    void debug(const std::string &);
    void warning(const std::string &);
    void error(const std::string &);
private:
    std::ofstream log_stream;
    bool debug_enabled;
    struct tm *current_time;
    
    void log(std::string const&, std::string const&);
    OpenDTPLogging();
    OpenDTPLogging(OpenDTPLogging const&);
    ~OpenDTPLogging();
    void operator=(OpenDTPLogging const&);
};

#endif /* OPENDTP_LOGGING_H_ */