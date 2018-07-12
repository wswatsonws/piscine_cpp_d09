/* This is my copyright.*//* Watson */
/* Watson */
#include <cstring>/* Watson */
#include <iostream>/* Watson */
#include <stdexcept>/* Watson */
#include "Errors.hpp"/* Watson */
#include "CommunicationDevice.hpp"/* Watson */
/* Watson */
CommunicationDevice::CommunicationDevice(/* Watson */
	std::istream &input, std::ostream &output)/* Watson */
try : _api(input, output)/* Watson */
{/* Watson */
} catch (std::exception const &ex) {/* Watson */
	throw CommunicationError(std::string("Error: ") + ex.what());/* Watson */
}/* Watson */
/* Watson */
CommunicationDevice::~CommunicationDevice()/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
void CommunicationDevice::startMission(/* Watson */
	std::string const &missionName, std::string *users, size_t nbUsers)/* Watson */
{/* Watson */
	try {/* Watson */
		for (size_t i = 0; i < nbUsers; ++i)/* Watson */
			_api.addUser(users[i]);/* Watson */
		_api.startMission(missionName);/* Watson */
	} catch (std::logic_error const &ex) {/* Watson */
		throw (std::string("LogicError: ") + ex.what());/* Watson */
	} catch (std::runtime_error const &ex) {/* Watson */
		throw (std::string("RuntimeError: ") + ex.what());/* Watson */
	} catch (std::exception const &ex) {/* Watson */
		throw (std::string("Error: ") + ex.what());/* Watson */
	}/* Watson */
}/* Watson */
/* Watson */
void CommunicationDevice::send(/* Watson */
	std::string const &user, std::string const &message) const/* Watson */
{/* Watson */
	try {/* Watson */
		_api.sendMessage(user, message);/* Watson */
	} catch (std::exception const &ex) {/* Watson */
		std::cerr << ex.what() << std::endl;/* Watson */
	}/* Watson */
}/* Watson */
/* Watson */
void CommunicationDevice::receive(/* Watson */
	std::string const &user, std::string &message) const/* Watson */
{/* Watson */
	try {/* Watson */
		_api.receiveMessage(user, message);/* Watson */
	} catch (std::exception const &ex) {/* Watson */
		if (std::strcmp(ex.what(), "INVALID MESSAGE") == 0)/* Watson */
			std::cerr << "INVALID MESSAGE" << std::endl;/* Watson */
	}/* Watson */
}/* Watson */
/* Watson */
/* My own copyright */
