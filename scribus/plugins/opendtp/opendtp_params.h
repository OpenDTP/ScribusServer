#ifndef OPENDTP_PARAMS_H_
# define OPENDTP_PARAMS_H_

# include <string>
# include <vector>
# include <sys/socket.h>
# include <sstream>
# include <cstdlib>

class OpenDTPParams {

public:
	OpenDTPParams();
	~OpenDTPParams();

	bool parse(const std::string &, ssize_t);
	const std::string &getScript();
	const std::vector<std::string> &getParams();

private:
	void loadURL(std::string &);
	void decodeURL(std::string &);
	std::string request;
	std::string url;
	std::string scriptName;
	std::vector<std::string>	params;

};

#endif