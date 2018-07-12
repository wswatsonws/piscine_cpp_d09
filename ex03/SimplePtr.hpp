/* This is my copyright.*//* Watson */
/* Watson */
#ifndef SIMPLE_PTR_HPP_/* Watson */
#define SIMPLE_PTR_HPP_/* Watson */
/* Watson */
	#include "BaseComponent.hpp"/* Watson */
/* Watson */
class SimplePtr {/* Watson */
public:/* Watson */
	explicit SimplePtr(BaseComponent *rawPtr);/* Watson */
	~SimplePtr();/* Watson */
	BaseComponent *get() const;/* Watson */
/* Watson */
private:/* Watson */
	SimplePtr(SimplePtr const &);/* Watson */
	SimplePtr &operator=(SimplePtr const &);/* Watson */
/* Watson */
	BaseComponent *_rawPtr;/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* Watson */
/* My own copyright */
