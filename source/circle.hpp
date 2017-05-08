#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Circle
{	
	public:

	Circle();
	Circle(Vec2 const& middle_in, float const& radius_in);
	Circle(Vec2 const& middle_in, float const& radius_in, Color const& color_in);

	

	float  			get_radius()  			const;
	float  			get_x() 				const;
	float  			get_y() 				const;
	float			circumreference() 		const;
	Color 	const& 	get_color();

	void 			draw_circle(Window const& win);
	void 			draw_circle(Window const& win, Color const& col); 

	private:

	Vec2 middle;
	float radius;
	Color color_;
	
};
#endif