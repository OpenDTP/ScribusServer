#include "opendtp_params.h"

#include <iostream>

OpenDTPParams::OpenDTPParams() {}

OpenDTPParams::~OpenDTPParams() {}

bool	OpenDTPParams::parse(const std::string &request, ssize_t length) {
	this->request = request;
	
	this->params.clear();
	std::istringstream f(this->request);
	std::string line;
	while (std::getline(f, line)) {
		if (line.compare(0, 4, "GET ") == 0 &&
			line.compare(0, 16, "GET /favicon.ico") != 0)
			this->loadURL(line);
	}
}

void OpenDTPParams::loadURL(std::string &line) {
	size_t start, end;
	int pos;

	start = line.find_first_of(' ');
	end = line.find_last_of(' ');
	this->url = line.substr((start + 1), (end - start - 1));

	pos = 0;
	end = 0;
	this->params.reserve(10);
	while (end < this->url.length()) {
		start = this->url.find('/', pos);
		end = this->url.find('/', start + 1);
		this->params.push_back(this->url.substr((start + 1), (end - start - 1)));
		pos = start + 1;
	}
}

const std::string &OpenDTPParams::getScript() {
	return (this->params)[0];
}

const std::vector<std::string> &OpenDTPParams::getParams() {
	return this->params;
}