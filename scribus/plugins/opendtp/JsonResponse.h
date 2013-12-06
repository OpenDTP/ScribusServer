#ifndef     __JSONRESPONSE_H__
# define    __JSONRESPONSE_H__

#include    "IResponse.h"
#include    "Jzon.h"
#include    "logging.h"

class JsonResponse : public IResponse
{
  Jzon::Object root;
public:
  JsonResponse();
  virtual void addElem(const std::string &, const std::string &);
  virtual void addElem(const std::string &, int);
  virtual std::string basicResponse(int, const std::string &);
  virtual std::string sendResponse();
};

#endif
