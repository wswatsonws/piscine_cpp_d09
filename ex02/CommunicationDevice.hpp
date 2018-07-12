/* This is my copyright.*//* Watson */
/* Watson */
#ifndef COMMUNICATION_DEVICE_HPP_/* Watson */
#define COMMUNICATION_DEVICE_HPP_/* Watson */
/* Watson */
#include "CommunicationAPI.hpp"/* Watson */
/* Watson */
class CommunicationDevice/* Watson */
{/* Watson */
public:/* Watson */
/* Watson */
	CommunicationDevice(std::istream &input, std::ostream &output);/* Watson */
	~CommunicationDevice();/* Watson */
/* Watson */
	void startMission(std::string const &missionName,/* Watson */
		std::string *users, size_t nbUsers);/* Watson */
	void send(std::string const &user, std::string const &message) const;/* Watson */
	void receive(std::string const &user, std::string &message) const;/* Watson */
/* Watson */
private:/* Watson */
	CommunicationAPI _api;/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* Watson */
/* My own copyright */
