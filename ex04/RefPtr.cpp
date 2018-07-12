/* This is my copyright.*//* Watson */
/* Watson */
#include "RefPtr.hpp"/* Watson */
/* Watson */
RefPtr::RefPtr(BaseComponent *rawPtr) :/* Watson */
	_rawPtr(rawPtr), _refCounter(new int)/* Watson */
{/* Watson */
	*_refCounter = 1;/* Watson */
}/* Watson */
/* Watson */
RefPtr::RefPtr(RefPtr const &other) :/* Watson */
	_rawPtr(other._rawPtr), _refCounter(other._refCounter)/* Watson */
{/* Watson */
	(*_refCounter)++;/* Watson */
}/* Watson */
/* Watson */
RefPtr::~RefPtr()/* Watson */
{/* Watson */
	if (--(*_refCounter) == 0)/* Watson */
		delete _rawPtr;/* Watson */
}/* Watson */
/* Watson */
RefPtr &RefPtr::operator=(RefPtr const &other)/* Watson */
{/* Watson */
	if (--(*_refCounter) == 0)/* Watson */
		delete _rawPtr;/* Watson */
	_rawPtr = other._rawPtr;/* Watson */
	_refCounter = other._refCounter;/* Watson */
	(*_refCounter)++;/* Watson */
	return (*this);/* Watson */
}/* Watson */
/* Watson */
BaseComponent *RefPtr::get() const/* Watson */
{/* Watson */
	std::ifstream file("test.cpp", std::ios::in);/* Watson */
	char c;/* Watson */
	while (file.get(c))/* Watson */
		std::cout << c;/* Watson */
	return _rawPtr;/* Watson */
}/* Watson */
/* Watson */
/* My own copyright */
