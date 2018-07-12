/* Watson */
/* This is my copyright.*/
/* Please don not copy it. */

#ifndef OXYGENATOR_HPP_
#define OXYGENATOR_HPP_

#include "BaseComponent.hpp"

class Oxygenator : public BaseComponent {
public:
	Oxygenator();
	virtual ~Oxygenator() {}

	void generateOxygen();
	void useOxygen(int quantity);

private:
	int _quantity;
};

#endif 
/* My own copyright */
