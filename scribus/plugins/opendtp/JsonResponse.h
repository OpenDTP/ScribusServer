#ifndef     __JSONRESPONSE_H__
# define    __JSONRESPONSE_H__

#include	<unistd.h>
#include    <ctime>

#include    "IResponse.h"
#include    "Jzon.h"
#include    "logging.h"

class JsonResponse : public IResponse
{
  Jzon::Object root;
public:
  JsonResponse();
  virtual std::string getHttpHeader(int);
  virtual void addElem(const std::string &, const std::string &);
  virtual void addElem(const std::string &, int);
  virtual void basicResponse(int, int, const std::string &);
  virtual void sendResponse(int);
};

#endif
