#ifndef OPENDTP_SCRIPTERCORE_
# define OPENDTP_SCRIPTERCORE_

# include <cstring>
# include <Python.h>
# include <QObject>

# include "logging.h"
# include "scribuscore.h"

#include "../scriptplugin/cmdcolor.h"
#include "../scriptplugin/cmddialog.h"
#include "../scriptplugin/cmddoc.h"
#include "../scriptplugin/cmdgetprop.h"
#include "../scriptplugin/cmdgetsetprop.h"
#include "../scriptplugin/cmdmani.h"
#include "../scriptplugin/cmdmisc.h"
#include "../scriptplugin/cmdobj.h"
#include "../scriptplugin/cmdpage.h"
#include "../scriptplugin/cmdsetprop.h"
#include "../scriptplugin/cmdtext.h"
#include "../scriptplugin/cmdutil.h"
#include "../scriptplugin/cmdstyle.h"
#include "../scriptplugin/svgimport.h"
#include "../scriptplugin/guiapp.h"

// Scribus objects for python
#include "../scriptplugin/objimageexport.h"
#include "../scriptplugin/objpdffile.h"
#include "../scriptplugin/objprinter.h"

class OpenDTPScripterCore : public QObject {
	Q_OBJECT

public slots:
	void runScriptFile(std::string, std::vector<std::string>);

private:
	void setParams(const std::vector<std::string> &);
	std::string getHeader(const std::string &, const std::string &);

};

#endif