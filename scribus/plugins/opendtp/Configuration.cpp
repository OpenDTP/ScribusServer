#include    "Configuration.h"
#include    "logging.h"

Configuration::Configuration()
{
  this->env = "development"; // TODO: Read this value from an environment variable
  parser = new IniParser();
  this->loaded = false;
}

void        Configuration::loadFile()
{
  OpenDTPLogging &logger = OpenDTPLogging::getInstance();

  if (!this->loaded)
  {
    try {
      parser->Load(CONFIG_FILE);
    } catch (IniParseException &e) {
      logger.error(e.what());
      exit(EXIT_FAILURE);
    }
    logger.debug("Config file successfully loaded!");
    this->loaded = true;
  }
}

int         Configuration::getInt(const std::string &key)
{
  int       value;
  OpenDTPLogging &logger = OpenDTPLogging::getInstance();

  this->loadFile();
  try {
    this->parser->QueryKeyValue<int>(this->env, key, value);
  } catch (IniParseException &e) {
    logger.error(e.what());
    exit(EXIT_FAILURE);
  }
  return (value);
}

std::string Configuration::getStr(const std::string &key)
{
  std::string value;
  OpenDTPLogging &logger = OpenDTPLogging::getInstance();

  this->loadFile();
  try {
  this->parser->QueryKeyValue<std::string>(this->env, key, value);
  } catch (IniParseException &e) {
    logger.error(e.what());
    exit(EXIT_FAILURE);
  }
  return (value);
}
