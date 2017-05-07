#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
#include "color.hpp"

class Rectangle
{
	public:

	Rectangle();
	Rectangle(Vec2 const& min_in, Vec2 const& max_in);
	Rectangle(Vec2 const& min_in, Vec2 const& max_in, Color const& color_in);

	float get_min_x() const;
	float get_min_y() const;
	float get_max_x() const;
	float get_max_y() const;
	float circumreference() const;
	Color const& 	get_color();


	private: 

	Vec2 min_;
	Vec2 max_;
	Color color_;


	
};
#endif