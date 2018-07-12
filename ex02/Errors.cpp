/* This is my copyright.*//* Watson */
/* Watson */
#include "Errors.hpp"/* Watson */
/* Watson */
NasaError::NasaError(std::string const &message,/* Watson */
	std::string const &component) :/* Watson */
	_message(message), _component(component)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
std::string const &NasaError::getComponent() const/* Watson */
{/* Watson */
	return (this->_component);/* Watson */
}/* Watson */
/* Watson */
const char *NasaError::what() const noexcept/* Watson */
{/* Watson */
	return (this->_message.c_str());/* Watson */
}/* Watson */
/* Watson */
LifeCriticalError::LifeCriticalError(std::string const &message,/* Watson */
	std::string const &component) :/* Watson */
	NasaError(message, component)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
MissionCriticalError::MissionCriticalError(std::string const &message,/* Watson */
	std::string const &component) :/* Watson */
	NasaError(message, component)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
CommunicationError::CommunicationError(std::string const &message) :/* Watson */
	NasaError(message, "CommunicationDevice")/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
UserError::UserError(std::string const &message,/* Watson */
	std::string const &component) :/* Watson */
	NasaError(message, component)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
/* My own copyright */
