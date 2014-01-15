#ifndef    __OPENDTP_SERVER_H__
# define   __OPENDTP_SERVER_H__

# include <sys/types.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <fcntl.h>
# include <string>

# include <QThread>
# include <QTimer>

# include "logging.h"
# include "opendtp_params.h"
# include "opendtp_scriptercore.h"
# include "socket_thread.h"

# define LOG_FILE "/tmp/opendtp.log"

class OpenDTPServer : public QThread
{
	Q_OBJECT

public:
  OpenDTPServer();
  SocketThread *getThread();
private:
	void run();

	struct sockaddr     cli_addr;
	int fd;
	QTimer timer;
  SocketThread *thread;

private slots:
     void doCommand();

};

Q_DECLARE_METATYPE(std::string);
Q_DECLARE_METATYPE(std::vector<std::string>);

#endif
