/*
For general Scribus (>=1.3.2) copyright and licensing information please refer
to the COPYING file provided with the program. Following this notice may exist
a copyright and/or license notice that predates the release of Scribus 1.3.2
for which a new license (GPL+exception) is in place.
*/
#ifndef OPENDTP_H_
# define OPENDTP_H_

# include <QObject>

# include "pluginapi.h"
# include "scplugin.h"
# include "opendtp_server.h"

class PLUGIN_API OpenDtp : public ScActionPlugin
{
	Q_OBJECT
	OpenDTPServer *server;
	OpenDTPScripterCore *scripterCore;

	public:
		OpenDtp();
		virtual ~OpenDtp();

		virtual bool run(ScribusDoc* doc, QString target = QString::null);
		virtual const QString fullTrName() const;
		virtual const AboutData* getAboutData() const;
		virtual void deleteAboutData(const AboutData* about) const;
		virtual void languageChange();
		virtual void addToMainWindowMenu(ScribusMainWindow *) {};
		virtual void runServer();
};

extern "C" PLUGIN_API int opendtp_getPluginAPIVersion();
extern "C" PLUGIN_API ScPlugin* opendtp_getPlugin();
extern "C" PLUGIN_API void opendtp_freePlugin(ScPlugin* plugin);

#endif /* OpenDTP_H_ */
