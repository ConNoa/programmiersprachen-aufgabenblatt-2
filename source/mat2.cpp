#include "mat2.hpp"

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


Mat2 operator*(Mat2 const& m1, Mat2 const& m2)
	{
		Mat2 m3;
		m3.x11=m1.x11*m2.x11+m1.x12*m2.x21;
		m3.x12=m1.x11*m2.x12+m1.x12*m2.x22;
		m3.x21=m1.x21*m2.x11+m1.x22*m2.x21;
		m3.x22=m1.x21*m2.x12+m1.x22*m2.x22;
		return m3;
	}