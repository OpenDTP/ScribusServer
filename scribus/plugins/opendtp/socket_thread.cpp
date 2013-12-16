#include <cstring>
#include "opendtp_server.h"
#include "socket_thread.h"
#include "JsonResponse.h"

SocketThread::SocketThread(int fd)
{
  this->fd = fd;
}

void SocketThread::run()
{
  int                 newsockfd;
  socklen_t           clilen;
  struct sockaddr     cli_addr;
  int                 n = 0;
  char                buffer[256];
  OpenDTPParams       params;
  OpenDTPLogging      &logger = OpenDTPLogging::getInstance();
  JsonResponse        json;
  std::string         rep;

  clilen = sizeof(cli_addr);
  if ((newsockfd = accept(this->fd, &(cli_addr), &clilen)) > 0) {
    bzero(buffer, 256);
    n = recv(newsockfd, buffer, 255, 0);
    if (n < 0)
      return;
    if (n > 0)
    {
      logger.info("Client connection received");
      params.parse(buffer, n);
      if (params.getParams().size() > 1) {
        emit hasRequest(params.getScript(), params.getParams());
        json.basicResponse(newsockfd, 200, "OK");
      }
      else
        json.basicResponse(newsockfd, 200, "OK");
    }
    close(newsockfd);
    logger.info("Closing connection");
  }
}
