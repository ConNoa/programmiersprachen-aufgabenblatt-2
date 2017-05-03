#ifndef VEC2_HPP			//definiert 
#define VEC2_HPP

// Vec2 class definition
struct Vec2
{
	//TODO Constructors
	Vec2();
	Vec2(float x_,float y_);
	// ~Vec2() wäre der Destruktor, wird aber nicht benötigt, weil sich der für Vec2 freigemachte Speicherplatz  beim schließen des Skopes automatisch freimacht.
	// er muss nur implementiert werden wenn expliziet netzwerkressourcen angefragt werden

	float x;
	float y;

	Vec2& operator+=(Vec2 const& v);
	Vec2& operator-=(Vec2 const& v);
	Vec2& operator*=(float s);
	Vec2& operator/=(float s);


};

#endif 	//VEC2_HPP