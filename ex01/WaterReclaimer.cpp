/* This is my copyright.*//* Watson */
/* Watson */
#include <iostream>/* Watson */
#include "Errors.hpp"/* Watson */
#include "WaterReclaimer.hpp"/* Watson */
/* Watson */
WaterReclaimer::WaterReclaimer() :/* Watson */
	_water(0), _started(false)/* Watson */
{/* Watson */
}/* Watson */
/* Watson */
void WaterReclaimer::start()/* Watson */
{/* Watson */
	if (_water == 0)/* Watson */
		throw MissionCriticalError(/* Watson */
			"Not enough water to achieve the mission.",/* Watson */
			"WaterReclaimer");/* Watson */
	_started = true;/* Watson */
}/* Watson */
/* Watson */
void WaterReclaimer::useWater(int water)/* Watson */
{/* Watson */
	if (_water == 0)/* Watson */
		throw UserError(/* Watson */
			"Cannot use water if the reclaimer hasn't started.",/* Watson */
			"WaterReclaimer");/* Watson */
	if (water < 0)/* Watson */
		throw UserError(/* Watson */
			"Water use should be positif.",/* Watson */
			"WaterReclaimer");/* Watson */
	if (_water <= 10)/* Watson */
		throw LifeCriticalError(/* Watson */
			"Cannot use water, not enough in the reclaimer.",/* Watson */
			"WaterReclaimer");/* Watson */
	_water -= water;/* Watson */
}/* Watson */
/* Watson */
void WaterReclaimer::generateWater()/* Watson */
{/* Watson */
	if (_water + 10 > 100)/* Watson */
		throw NasaError(/* Watson */
			"Cannot generate water, reclaimer already full.",/* Watson */
			"WaterReclaimer");/* Watson */
	_water += 10;/* Watson */
}/* Watson */
/* Watson */
/* My own copyright */
