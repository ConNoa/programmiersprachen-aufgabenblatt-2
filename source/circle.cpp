#include "circle.hpp"	
//#include "color.hpp"
#include <cmath>

Circle::Circle(Vec2 const& middle_in, float const& radius_in):
	middle{middle_in}, 
	radius{radius_in}
	{}
Circle::Circle(Vec2 const& middle_in, float const& radius_in, Color const& color_in):
	middle{middle_in}, 
	radius{radius_in}, 
	color_{color_in}
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