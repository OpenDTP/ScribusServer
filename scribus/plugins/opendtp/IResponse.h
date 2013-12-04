#ifndef   __IRESPONSE_H__
# define  __IRESPONSE_H__

#include  <string>

class IResponse
{
public:
  ~IResponse() {};
  virtual const std::string &getHttpHeader() = 0;
  virtual void addElem(const std::string &key, const std::string &value) = 0;
  virtual void addElem(const std::string &key, int value) = 0;
  virtual void basicResponse(int client, int error_code, const std::string &error_message) = 0;
  virtual void sendResponse(int client) = 0;
};


#endif
