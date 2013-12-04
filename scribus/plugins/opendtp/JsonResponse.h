#ifndef     __JSONRESPONSE_H__
# define    __JSONRESPONSE_H__

#include    "IResponse.h"
#include    "Jzon.h"
#include    "logging.h"

# define    HEADER "Content-type:text/html\r\n\r\n"

class JsonResponse : public IResponse
{
  Jzon::Object root;
public:
  JsonResponse();
  virtual const std::string &getHttpHeader();
  virtual void addElem(const std::string &, const std::string &);
  virtual void addElem(const std::string &, int);
  virtual void basicResponse(int, int, const std::string &);
  virtual void sendResponse(int);
};

#endif
