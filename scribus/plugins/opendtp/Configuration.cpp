#include    "Configuration.h"
#include    "logging.h"

Configuration::Configuration()
{
  this->env = "development"; // TODO: Read this value from an environment variable
  parser = new IniParser();
  this->loaded = false;
}

bool        Configuration::loadFile()
{
  OpenDTPLogging &logger = OpenDTPLogging::getInstance();

  if (this->loaded)
    return true;
  try {
    parser->Load(CONFIG_FILE);
  } catch (IniParseException &e) {
    logger.error(e.what());
    return false;
  }
  logger.debug("Config file successfully loaded!");
  this->loaded = true;
  return true;
}

int         Configuration::getInt(const std::string &key)
{
  int       value;
  OpenDTPLogging &logger = OpenDTPLogging::getInstance();


  if (!this->loadFile())
    return 0;
  try {
    this->parser->QueryKeyValue<int>(this->env, key, value);
  } catch (IniParseException &e) {
    logger.error(e.what());
    return 0;
  }
  return (value);
}

std::string Configuration::getStr(const std::string &key)
{
  std::string value;
  OpenDTPLogging &logger = OpenDTPLogging::getInstance();

  if (!this->loadFile())
    return NULL;
  try {
  this->parser->QueryKeyValue<std::string>(this->env, key, value);
  } catch (IniParseException &e) {
    logger.error(e.what());
    return 0;
  }
  return (value);
}
