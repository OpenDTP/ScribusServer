#include "logging.h"

void OpenDTPLogging::log(std::string const& message, std::string const& level)
{
	if (!this->log_stream.is_open()) {
		this->log_stream.open(LOG_FILE, std::ios_base::out | std::ios_base::app);
	}
	this->log_stream  << (current_time->tm_year + 1900) << '-' 
                    << (current_time->tm_mon + 1) << '-'
                    << current_time->tm_mday << " "
                    << current_time->tm_hour << ":"
                    << current_time->tm_min << ":"
                    << current_time->tm_sec << " "
                    << "[" << level << "] : " << message << std::endl;
}

void OpenDTPLogging::info(const std::string &message)
{
  this->log(message, "INFO");
}

void OpenDTPLogging::debug(const std::string &message)
{
  if (this->debug_enabled)
    this->log(message, "DEBUG");
}

void OpenDTPLogging::warning(const std::string &message)
{
  this->log(message, "WARNING");
}

void OpenDTPLogging::error(const std::string &message)
{
  this->log(message, "ERROR");
}

OpenDTPLogging::~OpenDTPLogging()
{
	if (!this->log_stream.is_open()) {
		this->log_stream.close();
	}
}

OpenDTPLogging::OpenDTPLogging()
{
  time_t  t;

  // TODO Read it from config file
  this->debug_enabled = true;
  
  t = time(0);
  this->current_time = localtime(&t);
}