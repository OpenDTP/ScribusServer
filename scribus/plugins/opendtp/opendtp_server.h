#ifndef   SCRIBUS_SERVER_H_
# define   SCRIBUS_SERVER_H_

# include <sys/types.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <fcntl.h>

# include <QThread>
# include <QTimer>

# include "logging.h"
# include "opendtp_params.h"
# include "opendtp_scriptercore.h"

# define PORT_NUMBER 8080
# define LOG_FILE "/tmp/opendtp.log"

class OpenDTPServer : public QThread
{
	Q_OBJECT

public:
  OpenDTPServer();
private:
	void run();
	void response(int, const char *);

	struct sockaddr     cli_addr;
	int fd;
  bool working;
	QTimer timer;

signals:
     void hasRequest(std::string, std::vector<std::string>);

private slots:
     void doCommand();
};

Q_DECLARE_METATYPE(std::string);
Q_DECLARE_METATYPE(std::vector<std::string>);

#endif
