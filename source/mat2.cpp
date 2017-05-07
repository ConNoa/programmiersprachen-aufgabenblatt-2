#include "mat2.hpp"
#include <iostream>
#include <cmath>

//Defaultkonstruktor
 Mat2::Mat2()    
	:  x11(1.0f), x12(0.0f), x21(0.0f), x22(1.0f)
	{}


//Userkonstruktor
Mat2::Mat2(float x11_in, float x12_in, float x21_in, float x22_in)
	: x11{x11_in}, x12{x12_in}, x21{x21_in}, x22{x22_in}
	{}


Mat2& Mat2::operator*=(Mat2 const& m2)
{
		Mat2 m3;
		m3.x11=x11*m2.x11+x12*m2.x21;
		m3.x12=x11*m2.x12+x12*m2.x22;
		m3.x21=x21*m2.x11+x22*m2.x21;
		m3.x22=x21*m2.x12+x22*m2.x22;
		x11=m3.x11;
		x12=m3.x12;
		x21=m3.x21;
		x22=m3.x22;
		return *this;
}

float Mat2::det() const
{
	float d;
	d=(x11*x22-x12*x21);
	return d;
}


Mat2 operator*(Mat2 const& m1, Mat2 const& m2)
	{
		Mat2 m3;
		m3.x11=m1.x11*m2.x11+m1.x12*m2.x21;
		m3.x12=m1.x11*m2.x12+m1.x12*m2.x22;
		m3.x21=m1.x21*m2.x11+m1.x22*m2.x21;
		m3.x22=m1.x21*m2.x12+m1.x22*m2.x22;
		return m3;
	}

Vec2 operator*(Mat2 const& m, Vec2 const& v)
	{
		Vec2 v3;
		v3.x=m.x11*v.x+m.x12*v.y;
		v3.y=m.x21*v.x+m.x22*v.y;
		return v3;
	}

Vec2 operator*(Vec2 const& v, Mat2 const& m)
	{
		std::cout<<"Aber eigentlich mathematisch nicht korrekt. Diese Matritzenmultiplikation ist nicht kommutativ.\n";
		Vec2 v3;
		v3.x=m.x11*v.x+m.x12*v.y;
		v3.y=m.x21*v.x+m.x22*v.y;
		return v3;
	}


Mat2 inverse(Mat2 const& m)
	{
		Mat2 m3;
		float x =(1/((m.x11*m.x22)-(m.x12*m.x21)));
		float t = m.x11;
		m3.x11 = m.x22;
		m3.x22 = t;
		m3.x12 = -m.x12;
		m3.x21 = -m.x21;
		m3.x11 = m3.x11*x;
		m3.x12 = m3.x12*x;
		m3.x21 = m3.x21*x;
		m3.x22 = m3.x22*x;
		return m3;

	}

Mat2 transpose(Mat2 const& m)
	{
		Mat2 m3;
		m3.x11=m.x11;
		m3.x12=m.x21;
		m3.x21=m.x12;
		m3.x22=m.x22;
		return m3;
	}

Mat2 make_rotation_mat2(float phi)
	{
		return  Mat2(std::cos(phi),-(std::sin(phi)),(std::sin(phi)),(std::cos(phi)));
	}
