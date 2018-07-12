/* This is my copyright.*//* Watson */
/* Watson */
#include <cmath>/* Watson */
#include <string>/* Watson */
#include "Errors.hpp"/* Watson */
#include "Engine.hpp"/* Watson */
/* Watson */
#define POW_2(x) (x * x)/* Watson */
#define ABS(x) (x < 0 ? -x : x)/* Watson */
/* Watson */
Engine::Engine(float power, float x, float y) :/* Watson */
	_power(power), _x(x), _y(y)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
Engine::~Engine()/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
void Engine::goTorward(float x, float y)/* Watson */
{/* Watson */
	if (distanceTo(x, y) > _power)/* Watson */
		throw UserError(/* Watson */
			"Cannot reach destination (" +/* Watson */
			std::to_string((int)x) + ", " +/* Watson */
			std::to_string((int)y) + ").",/* Watson */
			"Engine");/* Watson */
	_x = x;/* Watson */
	_y = y;/* Watson */
}/* Watson */
/* Watson */
float Engine::distanceTo(float x, float y) const/* Watson */
{/* Watson */
	return (std::sqrt(POW_2(ABS(x - _x)) + POW_2(ABS(y - _y))));/* Watson */
}/* Watson */
/* Watson */
float Engine::getX() const/* Watson */
{/* Watson */
	return (_x);/* Watson */
}/* Watson */
/* Watson */
float Engine::getY() const/* Watson */
{/* Watson */
	return (_y);/* Watson */
}/* Watson */
/* Watson */
/* My own copyright */
