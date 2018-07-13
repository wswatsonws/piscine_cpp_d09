/* This is my copyright.*//* Watson */
#include <iostream>/* Watson */
#include <stdexcept>/* Watson */
#include <sstream>/* Watson */
#include "Errors.hpp"/* Watson */
#include "CommunicationDevice.hpp"/* Watson */
/* Watson */
CommunicationDevice::CommunicationDevice(std::istream &input,/* Watson */
                                         std::ostream &output)/* Watson */
   try : _api(input, output)/* Watson */
{/* Watson */
}/* Watson */
catch(std::exception &e) {/* Watson */
std::stringstream out;/* Watson */
/* Watson */
out << "Error: " << e.what();/* Watson */
throw CommunicationError(out.str());/* Watson */
}/* Watson */
/* Watson */
CommunicationDevice::~CommunicationDevice()/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
void CommunicationDevice::startMission(std::string const &missionName,/* Watson */
                                  std::string *users,/* Watson */
                                  size_t nbUsers)/* Watson */
{/* Watson */
  std::stringstream out;/* Watson */
/* Watson */
  try {/* Watson */
    for (size_t i = 0; i < nbUsers; ++i)/* Watson */
      _api.addUser(users[i]);/* Watson */
    _api.startMission(missionName);/* Watson */
  }/* Watson */
  catch(std::logic_error &e) {/* Watson */
    out << "LogicError: " << e.what();/* Watson */
    throw CommunicationError(out.str());/* Watson */
  }/* Watson */
  catch(std::runtime_error &e) {/* Watson */
    out << "RuntimeError: " << e.what();/* Watson */
    throw CommunicationError(out.str());/* Watson */
  }/* Watson */
  catch(std::exception &e) {/* Watson */
    out << "Error: " << e.what();/* Watson */
    throw CommunicationError(out.str());/* Watson */
  }/* Watson */
}/* Watson */
/* Watson */
void CommunicationDevice::send(std::string const &user,/* Watson */
                          std::string const &message) const/* Watson */
{/* Watson */
  try {/* Watson */
    _api.sendMessage(user, message);/* Watson */
  }/* Watson */
  catch(std::exception &e) {/* Watson */
    std::cerr << e.what() << std::endl;/* Watson */
  }/* Watson */
}/* Watson */
/* Watson */
void CommunicationDevice::receive(std::string const &user,/* Watson */
                             std::string &message) const/* Watson */
{/* Watson */
  try {/* Watson */
    _api.receiveMessage(user, message);/* Watson */
  }/* Watson */
  catch (std::exception &e) {/* Watson */
    std::cerr << e.what() << std::endl;/* Watson */
    std::cerr << "INVALID MESSAGE";/* Watson */
  }/* Watson */
}/* Watson */
/* My own copyright */
