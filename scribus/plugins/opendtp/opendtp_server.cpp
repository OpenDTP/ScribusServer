#include "opendtp_server.h"

OpenDTPServer::OpenDTPServer() {
  this->working = false;
}

void OpenDTPServer::doCommand() {
  int                 newsockfd;
  socklen_t           clilen;
  int                 n = 0;
  char                buffer[256];
  OpenDTPParams       params;
  OpenDTPLogging      &logger = OpenDTPLogging::getInstance();

  clilen = sizeof(this->cli_addr);
  if ((newsockfd = accept(this->fd, &(this->cli_addr), &clilen))) {
    bzero(buffer, 256);
    n = recv(newsockfd, buffer, 255, 0);
    if (n < 0)
      return;
    if (n > 0)
    {
      logger.info("Client connection received");
      if (!this->working) {
        this->working = true;
        params.parse(buffer, n);
        if (params.getParams().size() > 1) {
          emit hasRequest(params.getScript(), params.getParams());
          this->response(newsockfd, buffer);
        }
        logger.debug("RECEIVED : ");
        logger.debug(buffer);
        this->working = false;
      }
      else {
        this->response(newsockfd, "{error_code : 2, error_message : \"Too many requests\"}");
        logger.error("Forbidden connection received : Too many requests");
      }
    }
    close(newsockfd);
    logger.info("Closing connection");
  }
}

void OpenDTPServer::response(int client, const char *str)
{
  std::string header = "Content-type:text/html\r\n\r\n";

  header += str;
  write(client, header.c_str(), header.length());
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

  connect(&(this->timer), SIGNAL(timeout()), this, SLOT(doCommand()), Qt::DirectConnection);
  this->timer.setInterval(5);
  this->timer.start();
  exec();
  this->timer.stop();

}

