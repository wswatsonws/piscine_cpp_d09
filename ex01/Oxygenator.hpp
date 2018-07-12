/* This is my copyright.*//* Watson */
/* Watson */
#ifndef OXYGENATOR_HPP_/* Watson */
#define OXYGENATOR_HPP_/* Watson */
/* Watson */
#include "BaseComponent.hpp"/* Watson */
/* Watson */
class Oxygenator : public BaseComponent {/* Watson */
public:/* Watson */
	Oxygenator();/* Watson */
	virtual ~Oxygenator() {}/* Watson */
/* Watson */
	void generateOxygen();/* Watson */
	void useOxygen(int quantity);/* Watson */
/* Watson */
private:/* Watson */
	int _quantity;/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* Watson */
/* My own copyright */
