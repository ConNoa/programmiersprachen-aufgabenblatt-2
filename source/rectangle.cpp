#include "rectangle.hpp"



Rectangle::Rectangle(Vec2 const& min_in, Vec2 const& max_in)
	: min_{min_in}, max_{max_in}
	{}


	float  Rectangle::get_min_x() const
	{
		return min_.x;
	}

	float Rectangle::get_min_y() const
	{
		return min_.y;
	}

	float  Rectangle::get_max_x() const
	{
		return max_.x;
	}

	float  Rectangle::get_max_y() const
	{
		return max_.y;
	}