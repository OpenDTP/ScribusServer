#include    "JsonResponse.h"

JsonResponse::JsonResponse()
{

}

const std::string &JsonResponse::getHttpHeader()
{
   
}

void        JsonResponse::addElem(const std::string &key, const std::string &value)
{
  this->root.Add(key, value);
}

void        JsonResponse::addElem(const std::string &key, int value)
{
  this->root.Add(key, value);
}

void        JsonResponse::basicResponse(int client, int error_code, const std::string &error_message)
{
  this->addElem("error_code", error_code);
  this->addElem("error_message", error_message);
  return this->sendResponse(client);
}

void        JsonResponse::sendResponse(int client)
{
  OpenDTPLogging      &logger = OpenDTPLogging::getInstance();
  Jzon::Writer writer(this->root, Jzon::StandardFormat);
  std::string resp = HEADER;

  writer.Write();
  logger.info("Json sending a response :");
  logger.info(writer.GetResult());
  resp += writer.GetResult();
  if (write(client, resp.c_str(), resp.length()) == -1)
    logger.error("Could not send a response to the client");
}
