#ifndef MAT2_HPP
#define MAT2_HPP

//Mat2 definitioin
struct Mat2
{
	Mat2();
	Mat2(float x11_in, float x12_in, float x21_in, float x22_in );
	// ...
	
	//Membervariablen, interner Speicher
	float x11;
	float x12;
	float x21;
	float x22;

	// ...
	Mat2& operator*=(Mat2 const& m);
};

Mat2 operator*(Mat2 const& m1, Mat2 const& m2);


#endif