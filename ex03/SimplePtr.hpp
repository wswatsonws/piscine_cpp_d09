/* Watson */
/* This is my copyright.*/
/* Please don not copy it. */

#ifndef SIMPLE_PTR_HPP_
#define SIMPLE_PTR_HPP_

	#include "BaseComponent.hpp"

class SimplePtr {
public:
	explicit SimplePtr(BaseComponent *rawPtr);
	~SimplePtr();
	BaseComponent *get() const;

private:
	SimplePtr(SimplePtr const &);
	SimplePtr &operator=(SimplePtr const &);

	BaseComponent *_rawPtr;
};

#endif 
/* My own copyright */
