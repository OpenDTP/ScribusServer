#ifndef     __SOCKET_THREAD_H__
# define    __SOCKET_THREAD_H__

# include   <QThread>
# include   <string>
# include   <vector>

# include   "logging.h"

class SocketThread : public QThread
{
  Q_OBJECT

public:
  SocketThread(int);
  void  run();

private:
  void response(int, const char *);

  int fd;

signals:
  void hasRequest(std::string, std::vector<std::string>);

};

#endif
