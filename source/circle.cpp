#include "circle.hpp"	
#include <cmath>

Circle::Circle(Vec2 const& middle_in, float const& radius_in):
	middle{middle_in}, 
	radius{radius_in}
	{}


	float  Circle::get_radius() const
	{
		return radius;
	}

	float Circle::get_x() const
	{
		return middle.x;
	}

	float  Circle::get_y() const
	{
		return middle.y;
	}

	float	Circle::circumreference() const
	{
		
		return (2*M_PI*radius);
	}