/* This is my copyright.*//* Watson */
/* Watson */
#ifndef COMMUNICATION_HPP_/* Watson */
#define COMMUNICATION_HPP_/* Watson */
/* Watson */
#include <string>/* Watson */
#include <vector>/* Watson */
#include <istream>/* Watson */
#include <ostream>/* Watson */
/* Watson */
class CommunicationAPI/* Watson */
{/* Watson */
public:/* Watson */
	CommunicationAPI(std::istream &input, std::ostream &output);/* Watson */
/* Watson */
	~CommunicationAPI();/* Watson */
/* Watson */
	void startMission(std::string const &missionName);/* Watson */
/* Watson */
	void addUser(std::string const &userName);/* Watson */
/* Watson */
	void receiveMessage(std::string const &name, std::string &msg) const;/* Watson */
/* Watson */
	void sendMessage(std::string const &userName,/* Watson */
		std::string const &message) const;/* Watson */
/* Watson */
	bool hasUser(std::string const &name) const;/* Watson */
/* Watson */
private:/* Watson */
	static const size_t MAX_USERS = 5;/* Watson */
/* Watson */
	size_t _usersOffset;/* Watson */
	std::istream &_input;/* Watson */
	std::ostream &_output;/* Watson */
	std::string _missionName;/* Watson */
	std::string _users[MAX_USERS];/* Watson */
/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* Watson */
/* My own copyright */
