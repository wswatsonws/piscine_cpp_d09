/* This is my copyright.*//* Watson */
#include <stdexcept>/* Watson */
#include <exception>/* Watson */
#include "CommunicationAPI.hpp"/* Watson */
/* Watson */
CommunicationAPI::CommunicationAPI(std::istream &input, std::ostream &output) :/* Watson */
	_usersOffset(0), _input(input), _output(output)/* Watson */
{/* Watson */
	if (!_input.good())/* Watson */
		throw std::runtime_error("Invalid input stream.");/* Watson */
	if (!_output.good())/* Watson */
		throw std::runtime_error("Invalid output stream.");/* Watson */
}/* Watson */
/* Watson */
CommunicationAPI::~CommunicationAPI()/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
bool CommunicationAPI::hasUser(std::string const &userName) const/* Watson */
{/* Watson */
	for (size_t i = 0; i < _usersOffset; ++i) {/* Watson */
		if (_users[i] == userName)/* Watson */
			return true;/* Watson */
	}/* Watson */
	return false;/* Watson */
}/* Watson */
/* Watson */
void CommunicationAPI::startMission(std::string const &missionName)/* Watson */
{/* Watson */
	if (missionName.size() == 0)/* Watson */
		throw std::invalid_argument(/* Watson */
			"`missionName` should be at least 1 char.");/* Watson */
	_missionName = missionName;/* Watson */
	/* Watson */
}/* Watson */
/* Watson */
void CommunicationAPI::addUser(std::string const &userName)/* Watson */
{/* Watson */
	if (userName.size() == 0)/* Watson */
		throw std::invalid_argument(/* Watson */
			"`userName` should be at least 1 char.");/* Watson */
	if (_usersOffset > MAX_USERS)/* Watson */
		throw std::out_of_range("Exceed max number of users added.");/* Watson */
	_users[_usersOffset] = userName;/* Watson */
	_usersOffset += 1;/* Watson */
}/* Watson */
/* Watson */
void CommunicationAPI::sendMessage(/* Watson */
	std::string const &userName, std::string const &message) const/* Watson */
{/* Watson */
	if (!hasUser(userName))/* Watson */
		throw std::invalid_argument("User " + userName + " not found.");/* Watson */
	if (_missionName.size() == 0)/* Watson */
		throw std::runtime_error("No mission started.");/* Watson */
	_output << message;/* Watson */
}/* Watson */
/* Watson */
void CommunicationAPI::receiveMessage(/* Watson */
	std::string const &userName, std::string &message) const/* Watson */
{/* Watson */
	if (!hasUser(userName))/* Watson */
		throw std::invalid_argument("User " + userName + " not found.");/* Watson */
	if (_missionName.size() == 0)/* Watson */
		throw std::runtime_error("No mission started.");/* Watson */
	_input >> message;/* Watson */
}/* Watson */
/* Watson */
/* My own copyright */
