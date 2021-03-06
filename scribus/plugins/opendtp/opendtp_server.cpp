#include <string>
#include "opendtp_server.h"
#include "JsonResponse.h"
#include "Configuration.h"

OpenDTPServer::OpenDTPServer()
{
  this->thread = new SocketThread();
}

SocketThread  *OpenDTPServer::getThread()
{
  return (this->thread);
}

void OpenDTPServer::doCommand()
{
  int                 newsockfd;
  socklen_t           clilen;
  struct sockaddr     cli_addr;
  char                buffer[256];
  JsonResponse        json;
  std::string s;
  std::vector<std::string> v;

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
  Configuration &conf = Configuration::getInstance();
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
  serv_addr.sin_addr.s_addr = inet_addr(conf.getStr("ip_address").c_str());
  serv_addr.sin_port = htons(conf.getInt("port"));
  if (bind(this->fd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
  {
    logger.error("Error binding the socket");
    return;
  }
  listen(this->fd, 42);
  logger.info("Correctly created the socket");
  this->thread->setFd(this->fd);

  connect(&(this->timer), SIGNAL(timeout()), this, SLOT(doCommand()), Qt::DirectConnection);
  this->timer.setInterval(5);
  this->timer.start();
  exec();
  this->timer.stop();

}
