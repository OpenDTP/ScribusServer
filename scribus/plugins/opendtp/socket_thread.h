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
  SocketThread();
  void  run();
  void  setFd(int);

private:
  int fd;

signals:
  void hasRequest(std::string, std::vector<std::string>);

};

#endif
