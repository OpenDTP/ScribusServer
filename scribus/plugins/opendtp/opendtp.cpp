/*
For general Scribus (>=1.3.2) copyright and licensing information please refer
to the COPYING file provided with the program. Following this notice may exist
a copyright and/or license notice that predates the release of Scribus 1.3.2
for which a new license (GPL+exception) is in place.
*/
#include "OpenDTP.h"

OpenDtp::OpenDtp() : ScActionPlugin()
{
	languageChange();
	runServer();
}

OpenDtp::~OpenDtp() {
	OpenDTPLogging      &logger = OpenDTPLogging::getInstance();

	logger.info("Shutting down server");
	this->server->quit();
    this->server->wait();
	delete this->server;
	delete this->scripterCore;
};

void OpenDtp::languageChange()
{
	m_actionInfo.name = "OpenDTP";
	m_actionInfo.text = tr("OpenDTP Server");
	m_actionInfo.menu = "Extras";

	m_actionInfo.enabledOnStartup = true;
}

const QString OpenDtp::fullTrName() const
{
	return QObject::tr("OpenDTP");
}

const ScActionPlugin::AboutData* OpenDtp::getAboutData() const
{
	AboutData* about = new AboutData;
	Q_CHECK_PTR(about);
	return about;
}

void OpenDtp::deleteAboutData(const AboutData* about) const
{
	Q_ASSERT(about);
	delete about;
}

// here will be pannels for configuration
bool OpenDtp::run(ScribusDoc* doc, QString target)
{
	return true;
}

void OpenDtp::runServer() {
	this->server = new OpenDTPServer();
	this->scripterCore = new OpenDTPScripterCore();

	qRegisterMetaType<std::string>();
	qRegisterMetaType<std::vector<std::string> >();
	QObject::connect(this->server, SIGNAL(hasRequest(std::string, std::vector<std::string>)),
		this->scripterCore, SLOT(runScriptFile(std::string, std::vector<std::string>)), Qt::QueuedConnection);
	this->server->start();
}

int opendtp_getPluginAPIVersion()
{
	return PLUGIN_API_VERSION;
}

ScPlugin* opendtp_getPlugin()
{
	OpenDtp* plug = new OpenDtp();
	Q_CHECK_PTR(plug);
	return plug;
}

void opendtp_freePlugin(ScPlugin* plugin)
{
	OpenDtp* plug = dynamic_cast<OpenDtp*>(plugin);
	Q_ASSERT(plug);
	delete plug;
}
