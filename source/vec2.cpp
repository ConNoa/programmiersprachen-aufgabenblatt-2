#ifndef VEC2_HPP			
#define VEC2_HPP

// Vec2 class definition
struct Vec2
{
	//TODO Constructors

	float x = 0;
	float y = 0;

	float* xi = &x;
	float* yi = &y;

	// ...

	Vec2& operator+=(Vec2 const& v);
	Vec2& operator-=(Vec2 const& v);
	Vec2& operator*=(float s);
	Vec2& operator/=(float s);

	// ...
};

#endif 	//VEC2_HPP