#ifndef   __CONFIGURATION_H__
# define  __CONFIGURATION_H__

# include <string>
# include <cstdlib>
# include "IniParser.h"

# define  CONFIG_FILE "/etc/opendtp.conf"

class Configuration
{
public:
  static Configuration& getInstance()
  {
    static Configuration instance;
    return instance;
  }
  std::string        getStr(const std::string &key);
  int                getInt(const std::string &key);

private:
  Configuration();
  ~Configuration() {};
  Configuration(Configuration const&) {};
  void operator=(Configuration const &) {};
  bool loadFile();

  std::string   env;
  IniParser     *parser;
  bool          loaded;
};

#endif
