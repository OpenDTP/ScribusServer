#ifndef OPENDTP_DOCUMENT_H_
# define OPENDTP_DOCUMENT_H_

# include <string>

# include "fileloader.h"
# include "scribusapi.h"
# include "scribusdoc.h"
# include "scribuscore.h"
# include "prefsmanager.h"
# include "commonstrings.h"
# include "plugins/formatidlist.h"
# include "scribus.h"

class OpenDTPDocument {

public:
	bool loadFile(const std::string &filename);

private:
	ScribusDoc *document;
	bool		HaveDoc;
};

#endif