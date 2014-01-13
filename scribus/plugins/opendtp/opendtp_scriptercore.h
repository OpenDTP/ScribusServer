#ifndef OPENDTP_SCRIPTERCORE_
# define OPENDTP_SCRIPTERCORE_

# include <cstring>
# include <Python.h>
# include <QObject>

# include "logging.h"
# include "scribuscore.h"

# define SCRIPTS_PATH "/data/scripts/"

class OpenDTPScripterCore : public QObject {
	Q_OBJECT

public slots:
	void runScriptFile(std::string, std::vector<std::string>);

private:
	void setParams(const std::vector<std::string> &);
	std::string getHeader(const std::string &, const std::string &);

};

#endif