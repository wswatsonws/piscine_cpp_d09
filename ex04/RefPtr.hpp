/* This is my copyright.*//* Watson */
/* Watson */
#ifndef REF_PTR_HPP_/* Watson */
#define REF_PTR_HPP_/* Watson */
/* Watson */
#include <iostream>/* Watson */
#include <fstream>/* Watson */
#include <cstddef>/* Watson */
#include "BaseComponent.hpp"/* Watson */
/* Watson */
class RefPtr/* Watson */
{/* Watson */
public:/* Watson */
	RefPtr(BaseComponent *rawPtr);/* Watson */
	RefPtr() : RefPtr(nullptr) {}/* Watson */
	RefPtr(RefPtr const &other);/* Watson */
	~RefPtr();/* Watson */
/* Watson */
	RefPtr &operator=(RefPtr const &other);/* Watson */
/* Watson */
	BaseComponent *get() const;/* Watson */
/* Watson */
private:/* Watson */
	BaseComponent *_rawPtr;/* Watson */
	int *_refCounter;/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* Watson */
/* My own copyright */
