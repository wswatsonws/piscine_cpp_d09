/* This is my copyright.*//* Watson */
/* Watson */
#include "SimplePtr.hpp"/* Watson */
/* Watson */
SimplePtr::SimplePtr(BaseComponent *rawPtr) :/* Watson */
	_rawPtr(rawPtr)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
SimplePtr::SimplePtr(SimplePtr const &)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
SimplePtr::~SimplePtr()/* Watson */
{/* Watson */
	delete _rawPtr;/* Watson */
}/* Watson */
/* Watson */
BaseComponent *SimplePtr::get() const/* Watson */
{/* Watson */
	return _rawPtr;/* Watson */
}/* Watson */
/* Watson */
SimplePtr &SimplePtr::operator=(SimplePtr const &)/* Watson */
{/* Watson */
	return *this;/* Watson */
}/* Watson */
/* Watson */
/* My own copyright */
