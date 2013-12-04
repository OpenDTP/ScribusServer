#include    <sstream>
#include    "JsonResponse.h"

JsonResponse::JsonResponse()
{

}

std::string JsonResponse::getHttpHeader(int content_length)
{
  std::string    response;
  std::ostringstream oss;

  oss << content_length;
  response = "HTTP/1.1 200 OK\r\n";
  response += "Content-Type: application/json; charset=utf-8\r\n";
  response += "Content-Length: ";
  response += oss.str();
  response += "\r\nServer: Scribus\r\n\r\n";
  return response;
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
  std::string response;
  std::string content;

  writer.Write();
  content = writer.GetResult();
  logger.info("Json sending a response :");
  logger.info(content);
  response = this->getHttpHeader(content.length());
  response += content;
  if (write(client, response.c_str(), response.length()) == -1)
    logger.error("Could not send a response to the client");
}
