#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"

class Circle
{	
	public:

	Circle();
	Circle(Vec2 const& middle_in, float const& radius_in);

	

	float  get_radius() const;
	float  get_x() const;
	float  get_y() const;

	private:

	Vec2 middle;
	float radius;
	
};
#endif