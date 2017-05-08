#include "rectangle.hpp"
#include <cmath>


Rectangle::Rectangle(Vec2 const& min_in, Vec2 const& max_in)
	: 	min_{min_in}, 
		max_{max_in}
	{}

Rectangle::Rectangle(Vec2 const& min_in, Vec2 const& max_in, Color const& color_in)
	: 	min_{min_in}, 
		max_{max_in}, 
		color_{color_in}
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



	float	Rectangle::circumreference() const
	{
		
		return ((2*(max_.x-min_.x))+(2*(max_.y-min_.y)));
	}


	void Rectangle::draw_rectangle(Window const& win)
	{
		win.draw_line(min_.x, min_.y, min_.x, max_.y, 0.0f, 0.0f, 0.0f);
		win.draw_line(min_.x, max_.y, max_.x, max_.y, 0.0f, 0.0f, 0.0f);
		win.draw_line(max_.x, max_.y, max_.x, min_.y, 0.0f, 0.0f, 0.0f);
		win.draw_line(max_.x, min_.y, min_.x, min_.y, 0.0f, 0.0f, 0.0f);
		return;
	}

	void Rectangle::draw_rectangle(Window const& win, Color const& col)
	{
		win.draw_line(min_.x, min_.y, min_.x, max_.y, col.r, col.g, col.b);
		win.draw_line(min_.x, max_.y, max_.x, max_.y, col.r, col.g, col.b);
		win.draw_line(max_.x, max_.y, max_.x, min_.y, col.r, col.g, col.b);
		win.draw_line(max_.x, min_.y, min_.x, min_.y, col.r, col.g, col.b);
		return;
	}



	Color const& Rectangle::get_color()
	{

		return color_;
	}