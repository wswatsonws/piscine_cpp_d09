/* This is my copyright.*//* Watson */
/* Watson */
#ifndef ENGINE_HPP_/* Watson */
#define ENGINE_HPP_/* Watson */
/* Watson */
#include <cstddef>/* Watson */
#include "BaseComponent.hpp"/* Watson */
/* Watson */
class Engine : public BaseComponent {/* Watson */
public:/* Watson */
/* Watson */
	Engine(float power, float x = 0, float y = 0);/* Watson */
	virtual ~Engine();/* Watson */
/* Watson */
	void goTorward(float x, float y);/* Watson */
	float distanceTo(float x, float y) const;/* Watson */
/* Watson */
	float getX() const;/* Watson */
	float getY() const;/* Watson */
/* Watson */
private:/* Watson */
	float _power;/* Watson */
	float _x;/* Watson */
	float _y;/* Watson */
/* Watson */
};/* Watson */
/* Watson */
#endif /* Watson */
/* Watson */
/* My own copyright */
