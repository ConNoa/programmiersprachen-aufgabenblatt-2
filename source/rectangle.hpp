#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"

class Rectangle
{
	public:

	Rectangle();
	Rectangle(Vec2 const& min_in, Vec2 const& max_in);

	float get_min_x() const;
	float get_min_y() const;
	float get_max_x() const;
	float get_max_y() const;

	private: 

	Vec2 min_;
	Vec2 max_;

	
};
#endif