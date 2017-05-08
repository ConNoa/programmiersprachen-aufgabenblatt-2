#include "circle.hpp"	
//#include "color.hpp"
#include "mat2.hpp"
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


	float Circle::get_radius() const
	{
		return radius;
	}

	float Circle::get_x() const
	{
		return middle.x;
	}

	float Circle::get_y() const
	{
		return middle.y;
	}


	float Circle::circumreference() const
	{

		return (2*M_PI*radius);
	}

	void Circle::draw_circle(Window const& win)
	{
		float r = radius;
		win.draw_point(middle.x, middle.y, 0.0f, 0.0f, 0.0f);
		
		for (int i=1; i<361; i++)
    	{
        	Vec2 start=((make_rotation_mat2(2*M_PI*i/360))*Vec2(r,0)+middle);
        	Vec2 end=((make_rotation_mat2(2*M_PI*(i+1)/360))*Vec2(r,0)+middle);
        	win.draw_line(start.x,start.y,end.x,end.y, 0.0f, 0.0f, 0.0f);
		}


		return;
	}

	void Circle::draw_circle(Window const& win, Color const& col)
	{
		float r = radius;
		win.draw_point(middle.x, middle.y, col.r, col.g, col.b);
		
		for (int i=1; i<361; i++)
    	{
        	Vec2 start=((make_rotation_mat2(2*M_PI*i/360))*Vec2(r,0)+middle);
        	Vec2 end=((make_rotation_mat2(2*M_PI*(i+1)/360))*Vec2(r,0)+middle);
        	win.draw_line(start.x,start.y,end.x,end.y, col.r, col.g, col.b);
		}


		return;
	}


	Color const& Circle::get_color()
	{

		return color_;
	}
