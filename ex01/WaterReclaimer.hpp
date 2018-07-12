/* This is my copyright.*//* Watson */
/* Watson */
#ifndef WATER_RECLAIMER_HPP_/* Watson */
#define WATER_RECLAIMER_HPP_/* Watson */
/* Watson */
#include <cstddef>/* Watson */
#include "BaseComponent.hpp"/* Watson */
/* Watson */
class WaterReclaimer : public BaseComponent {/* Watson */
public:/* Watson */
	WaterReclaimer();/* Watson */
	virtual ~WaterReclaimer() {}/* Watson */
/* Watson */
	void start();/* Watson */
	void generateWater();/* Watson */
	void useWater(int water);/* Watson */
/* Watson */
private:/* Watson */
	int _water;/* Watson */
	bool _started;/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* Watson */
/* My own copyright */
