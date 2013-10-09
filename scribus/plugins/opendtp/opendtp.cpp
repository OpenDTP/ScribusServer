/*
For general Scribus (>=1.3.2) copyright and licensing information please refer
to the COPYING file provided with the program. Following this notice may exist
a copyright and/or license notice that predates the release of Scribus 1.3.2
for which a new license (GPL+exception) is in place.
*/
#include "OpenDTP.h"

OpenDTP::OpenDTP() : ScActionPlugin()
{
	languageChange();
	runServer();
}

OpenDTP::~OpenDTP() {
	OpenDTPLogging      &logger = OpenDTPLogging::getInstance();

	logger.info("Shutting down server");
	this->server->quit();
    this->server->wait();
	delete this->server;
	delete this->scripterCore;
};

void OpenDTP::languageChange()
{
	m_actionInfo.name = "OpenDTP";
	m_actionInfo.text = tr("OpenDTP Server");
	m_actionInfo.menu = "Extras";

	m_actionInfo.enabledOnStartup = true;
}

const QString OpenDTP::fullTrName() const
{
	return QObject::tr("OpenDTP");
}

const ScActionPlugin::AboutData* OpenDTP::getAboutData() const
{
	AboutData* about = new AboutData;
	Q_CHECK_PTR(about);
	return about;
}

void OpenDTP::deleteAboutData(const AboutData* about) const
{
	Q_ASSERT(about);
	delete about;
}

// here will be pannels for configuration
bool OpenDTP::run(ScribusDoc* doc, QString target)
{
	return true;
}

void OpenDTP::runServer() {
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
	OpenDTP* plug = new OpenDTP();
	Q_CHECK_PTR(plug);
	return plug;
}

void opendtp_freePlugin(ScPlugin* plugin)
{
	OpenDTP* plug = dynamic_cast<OpenDTP*>(plugin);
	Q_ASSERT(plug);
	delete plug;
}
