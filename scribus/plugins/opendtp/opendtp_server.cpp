#include <string>
#include "opendtp_server.h"
#include "JsonResponse.h"

OpenDTPServer::OpenDTPServer() {}

void OpenDTPServer::doCommand()
{
  int                 newsockfd;
  socklen_t           clilen;
  struct sockaddr     cli_addr;
  char                buffer[256];
  JsonResponse        json;

  if (this->thread->isRunning()) {
    if ((newsockfd = accept(this->fd, &(cli_addr), &clilen)) > 0) {
      bzero(buffer, 256);
      if (recv(newsockfd, buffer, 255, 0) > 0) {
        json.basicResponse(newsockfd, 2, "Too many requests");
      }
      close(newsockfd);
    }
  }
  else {
    this->thread->start();
  }
}

void OpenDTPServer::run()
{

  OpenDTPLogging &logger = OpenDTPLogging::getInstance();
  struct sockaddr_in serv_addr;

  logger.info("Trying to create the socket");
  this->fd = socket(AF_INET, SOCK_STREAM, 0);
  fcntl (this->fd, F_SETFL, O_NONBLOCK);
  if (this->fd < 0)
  {
    logger.error("Error creating the socket");
    return;
  }
  bzero((char *) &serv_addr, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr.s_addr = INADDR_ANY;
  serv_addr.sin_port = htons(PORT_NUMBER);
  if (bind(this->fd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
  {
    logger.error("Error binding the socket");
    return;
  }
  listen(this->fd, 42);
  logger.info("Correctly created the socket");
  this->thread = new SocketThread(this->fd);

  connect(&(this->timer), SIGNAL(timeout()), this, SLOT(doCommand()), Qt::DirectConnection);
  this->timer.setInterval(5);
  this->timer.start();
  exec();
  this->timer.stop();

}
