#include    "JsonResponse.h"

JsonResponse::JsonResponse()
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

std::string JsonResponse::basicResponse(int error_code, const std::string &error_message)
{
  this->addElem("error_code", error_code);
  this->addElem("error_message", error_message);
  return this->sendResponse();
}

std::string JsonResponse::sendResponse()
{
  OpenDTPLogging      &logger = OpenDTPLogging::getInstance();
  Jzon::Writer writer(this->root, Jzon::StandardFormat);

  writer.Write();
  logger.info("Json sending a response :");
  logger.info(writer.GetResult());
  return writer.GetResult();
}
