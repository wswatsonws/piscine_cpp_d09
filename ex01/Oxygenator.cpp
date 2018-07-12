/* This is my copyright.*//* Watson */
/* Watson */
#include <iostream>/* Watson */
#include "Errors.hpp"/* Watson */
#include "Oxygenator.hpp"/* Watson */
/* Watson */
Oxygenator::Oxygenator() : _quantity(0)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
void Oxygenator::generateOxygen()/* Watson */
{/* Watson */
	_quantity += 10;/* Watson */
}/* Watson */
/* Watson */
void Oxygenator::useOxygen(int quantity)/* Watson */
{/* Watson */
	if (_quantity <= 10)/* Watson */
		throw LifeCriticalError(/* Watson */
			"Not enough oxygen to live.",/* Watson */
			"Oxygenator");/* Watson */
	if (_quantity <= 20)/* Watson */
		throw MissionCriticalError(/* Watson */
			"Not enough oxygen to continue the mission.",/* Watson */
			"Oxygenator");/* Watson */
	_quantity -= quantity;/* Watson */
}/* Watson */
/* Watson */
/* My own copyright */
