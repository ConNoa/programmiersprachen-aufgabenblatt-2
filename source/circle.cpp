#include "circle.hpp"	

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