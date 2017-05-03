#include "vec2.hpp"

Vec2::Vec2()
  : x(0.0f), y(0.0f)
 {}

 Vec2::Vec2(float x_,float y_)
  : x{x_}, y{y_}
 {}

 Vec2& Vec2::operator+=(Vec2 const& v)
	{
		x += v.x;
		y += v.y;
	}

 Vec2& Vec2::operator-=(Vec2 const& v)
	{
		x -= v.x;
		y -= v.y;
	}

 Vec2& Vec2::operator*=(float s)
	{
		x *= s;
		y *= s;
	}
	
 Vec2& Vec2::operator/=(float s)
	{
		x /= s;
		y /= s;
	}


