/* This is my copyright.*//* Watson */
/* Watson */
#ifndef ERRORS_HPP_/* Watson */
#define ERRORS_HPP_/* Watson */
/* Watson */
#include <stdexcept>/* Watson */
#include <string>/* Watson */
/* Watson */
class NasaError : public std::exception {/* Watson */
public:/* Watson */
	NasaError(std::string const &message,/* Watson */
		std::string const &component = "Unknown");/* Watson */
/* Watson */
	std::string const &getComponent() const;/* Watson */
	const char *what() const noexcept;/* Watson */
/* Watson */
private:/* Watson */
	std::string _message;/* Watson */
	std::string _component;/* Watson */
};/* Watson */
/* Watson */
class LifeCriticalError : public NasaError {/* Watson */
public:/* Watson */
	LifeCriticalError(std::string const &message,/* Watson */
		std::string const &component = "Unknown");/* Watson */
};/* Watson */
/* Watson */
class MissionCriticalError : public NasaError {/* Watson */
public:/* Watson */
	MissionCriticalError(std::string const &message,/* Watson */
		std::string const &component = "Unknown");/* Watson */
};/* Watson */
/* Watson */
class CommunicationError : public NasaError {/* Watson */
public:/* Watson */
	CommunicationError(std::string const &message);/* Watson */
};/* Watson */
/* Watson */
class UserError : public NasaError {/* Watson */
public:/* Watson */
	UserError(std::string const &message,/* Watson */
		std::string const &component = "Unknown");/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* Watson */
/* My own copyright */
