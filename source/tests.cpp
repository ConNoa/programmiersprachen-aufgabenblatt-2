#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"



TEST_CASE("it should initialize the members with 0", "[constructor]")
{
	Vec2 v;
	REQUIRE(v.x == 0.0f);
	REQUIRE(v.y == 0.0f);
}

TEST_CASE("konstruktor, der x und y übergeben bekommt")
{
	Vec2 v{2.0f, -3.0f};
	REQUIRE(v.x == 2.0f);
	REQUIRE(v.y == -3.0f);
}


//Aufgabe 2.3

TEST_CASE("operator += soll getestet werden_1")
{
	Vec2 v{2.0f, -3.0f};
	Vec2 z{4.0f, 5.0f};
	v += z;
	REQUIRE(v.x == 6.0f);
	REQUIRE(v.y == 2.0f);
}

TEST_CASE("operator += soll getestet werden_2")
{
	Vec2 v{2.0f, -3.0f};
	Vec2 z{-2.0f, 3.0f};
	v += z;
	REQUIRE(v.x == 0.0f);
	REQUIRE(v.y == 0.0f);
}

TEST_CASE("operator -= soll getestet werden_1")
{
	Vec2 v{2.0f, -3.0f};
	Vec2 z{-2.0f, 3.0f};
	v -= z;
	REQUIRE(v.x == 4.0f);
	REQUIRE(v.y == -6.0f);
}

TEST_CASE("operator -= soll getestet werden_2")
{
	Vec2 v{3.0f, -3.0f};
	Vec2 z{7.5f, 2.5f};
	v -= z;
	REQUIRE(v.x == -4.5f);
	REQUIRE(v.y == -5.5f);
}

TEST_CASE("operator *= soll getestet werden_1")
{
	Vec2 v{2.0f, -3.0f};
	v *= 6.5f;

	REQUIRE(v.x == 13.0f);
	REQUIRE(v.y == -19.5f);
}

TEST_CASE("operator *= soll getestet werden_2")
{
	Vec2 v{3.0f, -3.0f};
	v *= 8.0f;

	REQUIRE(v.x == 24.0f);
	REQUIRE(v.y == -24.0f);
}

TEST_CASE("operator /= soll getestet werden_1")
{
	Vec2 v{20.0f, -30.0f};
	v /= 5.0f;

	REQUIRE(v.x == 4.0f);
	REQUIRE(v.y == -6.0f);
}

TEST_CASE("operator /= soll getestet werden_2")
{
	Vec2 v{35.0f, -14.0f};
	v /= 0.0f;

	REQUIRE(v.x == 35.0f);
	REQUIRE(v.y == -14.0f);
}


// Aufgabe 2.4

TEST_CASE("operator + soll getestet werden_1")
{
	Vec2 v{2.0f, -3.0f};
	Vec2 z{4.0f, 5.0f};
	
	Vec2 c (v+z);
	REQUIRE(c.x == 6.0f);
	REQUIRE(c.y == 2.0f);
}

TEST_CASE("operator + soll getestet werden_2")
{
	Vec2 v{2.0f, -3.0f};
	Vec2 z{-2.0f, 3.0f};
	Vec2 c (v+z);
	REQUIRE(c.x == 0.0f);
	REQUIRE(c.y == 0.0f);
}

TEST_CASE("operator - soll getestet werden_1")
{
	Vec2 v{2.0f, -3.0f};
	Vec2 z{4.0f, 5.0f};
	Vec2 c (v-z);
	REQUIRE(c.x == -2.0f);
	REQUIRE(c.y == -8.0f);
}

TEST_CASE("operator - soll getestet werden_2")
{
	Vec2 v{2.0f, -3.0f};
	Vec2 z{-2.0f, 3.0f};
	Vec2 c (v-z);

	REQUIRE(c.x == 4.0f);
	REQUIRE(c.y == -6.0f);
}

TEST_CASE("operator * soll getestet werden_1")
{
	Vec2 v{2.0f, 4.0f};
	Vec2 z{-2.0f, 9.0f};
	float g = 10;
	v=v*g;
	z=z*g;
	REQUIRE(v.x == 20.0f);
	REQUIRE(v.y == 40.0f);
	REQUIRE(z.x == -20.0f);
	REQUIRE(z.y == 90.0f);
}
TEST_CASE("operator * soll getestet werden_2")
{
	Vec2 v{5.0f, 8.0f};
	Vec2 z{-6.0f, 3.0f};
	float f = 11;
	v=v*f;
	z=z*f;
	REQUIRE(v.x == 55.0f);
	REQUIRE(v.y == 88.0f);
	REQUIRE(z.x == -66.0f);
	REQUIRE(z.y == 33.0f);
}


TEST_CASE("operator / soll getestet werden_1")
{
	Vec2 v{2.0f, 4.0f};
	Vec2 z{-2.0f, 9.0f};
	float g = 2;
	v=v/g;
	z=z/g;
	REQUIRE(v.x == 1.0f);
	REQUIRE(v.y == 2.0f);
	REQUIRE(z.x == -1.0f);
	REQUIRE(z.y == 4.5f);
}
TEST_CASE("operator / soll getestet werden_2")
{
	Vec2 v{5.0f, 8.0f};
	Vec2 z{-6.0f, 3.0f};
	float f = 0.5;
	v=v/f;
	z=z/f;
	REQUIRE(v.x == 10.0f);
	REQUIRE(v.y == 16.0f);
	REQUIRE(z.x == -12.0f);
	REQUIRE(z.y == 6.0f);
}

TEST_CASE("operator * soll getestet werden mit floats vorne_1")
{
	Vec2 v{2.0f, 4.0f};
	Vec2 z{-2.0f, 9.0f};
	float g = 10;
	v=g*v;
	z=g*z;
	REQUIRE(v.x == 20.0f);
	REQUIRE(v.y == 40.0f);
	REQUIRE(z.x == -20.0f);
	REQUIRE(z.y == 90.0f);
}
TEST_CASE("operator * soll getestet werden mit floats vorne_2")
{
	Vec2 v{5.0f, 8.0f};
	Vec2 z{-6.0f, 3.0f};
	float f = 11;
	v=f*v;
	z=f*z;
	REQUIRE(v.x == 55.0f);
	REQUIRE(v.y == 88.0f);
	REQUIRE(z.x == -66.0f);
	REQUIRE(z.y == 33.0f);
}

// Aufgabe 2.5 mat2
TEST_CASE("mat2 operator* soll getestet werden_1")
{
	Mat2 v{	2.0f, 4.0f, 
			1.0f, 3.0f};
	Mat2 z{	3.0f, 5.0f, 
			2.0f, 2.0f};
	v=v*z;
	
	REQUIRE(v.x11 == 14.0f);
	REQUIRE(v.x12 == 18.0f);
	REQUIRE(v.x21 == 9.0f);
	REQUIRE(v.x22 == 11.0f);
}

TEST_CASE("mat2 operator*= soll getestet werden_1")
{
	Mat2 v{	2.0f, 4.0f, 
			1.0f, 3.0f};
	Mat2 z{	3.0f, 5.0f, 
			2.0f, 2.0f};
	v*=z;
	
	REQUIRE(v.x11 == 14.0f);
	REQUIRE(v.x12 == 18.0f);
	REQUIRE(v.x21 == 9.0f);
	REQUIRE(v.x22 == 11.0f);
}
TEST_CASE("mat2 operator* soll getestet werden_2")
{
	Mat2 v{	30.0f, 50.0f, 
			25.0f, 40.0f};
	Mat2 z{	2.0f, 3.0f, 
			1.0f, 1.0f};
	v=v*z;
	REQUIRE(v.x11 == 110.0f);
	REQUIRE(v.x12 == 140.0f);
	REQUIRE(v.x21 == 90.0f);
	REQUIRE(v.x22 == 115.0f);
}

TEST_CASE("mat2 operator*= soll getestet werden_2")
{
	Mat2 v{	30.0f, 50.0f, 
			25.0f, 40.0f};
	Mat2 z{	2.0f, 3.0f, 
			1.0f, 1.0f};
	v*=z;
	REQUIRE(v.x11 == 110.0f);
	REQUIRE(v.x12 == 140.0f);
	REQUIRE(v.x21 == 90.0f);
	REQUIRE(v.x22 == 115.0f);
}

TEST_CASE("mat2 determinante soll getestet werden_1")
{
	Mat2 v{	3.0f, 5.0f, 
			2.0f, 4.0f};
	Mat2 z{	2.0f, 3.0f, 
			1.0f, 1.0f};
	Mat2 y{	5.0f, 4.0f, 
			6.0f, 5.0f};


	
	REQUIRE(v.det() == 2.0f);
	REQUIRE(z.det() == -1.0f);
	REQUIRE(y.det() == 1.0f);

}

TEST_CASE("mat2 inverses soll getestet werden_1")
{
	Mat2 v{	1.0f, 12.0f, 
			5.0f, 4.0f};
	v= inverse(v);
	REQUIRE(v.x11 == Approx(-0.07143f));
	REQUIRE(v.x12 == Approx(0.21429f));
	REQUIRE(v.x21 == Approx(0.08929f));
	REQUIRE(v.x22 == Approx(-0.01786f));

}
TEST_CASE("mat2 inverses soll getestet werden_2")
{
	Mat2 v{	6.0f, 2.0f, 
			4.0f, 8.0f};
	v= inverse(v);
	REQUIRE(v.x11 == Approx(0.2f));
	REQUIRE(v.x12 == Approx(-0.05f));
	REQUIRE(v.x21 == Approx(-0.1f));
	REQUIRE(v.x22 == Approx(0.15f));

}

TEST_CASE("mat2 mit vec2 multipilzieren_1")
{
	Mat2 m{	6.0f, 2.0f, 
			4.0f, 8.0f};
	Vec2 z{-2.0f, 9.0f};

	z= m*z;
	REQUIRE(z.x == Approx(6.0f));
	REQUIRE(z.y == Approx(64.0f));
}


TEST_CASE("mat2 mit vec2 multipilzieren_2")
{
	Mat2 m{	9.0f, 1.0f, 
			2.0f, 3.0f};
	Vec2 z{2.0f, 9.0f};

	z= m*z;
	REQUIRE(z.x == Approx(27.0f));
	REQUIRE(z.y == Approx(31.0f));
}

TEST_CASE("mat2 mit vec2 multipilzieren_1_falschherum")
{
	Mat2 m{	6.0f, 2.0f, 
			4.0f, 8.0f};
	Vec2 z{-2.0f, 9.0f};

	z= z*m;
	REQUIRE(z.x == Approx(6.0f));
	REQUIRE(z.y == Approx(64.0f));
}


TEST_CASE("mat2 mit vec2 multipilzieren_2_falschherum")
{
	Mat2 m{	9.0f, 1.0f, 
			2.0f, 3.0f};
	Vec2 z{2.0f, 9.0f};

	z= z*m;
	REQUIRE(z.x == Approx(27.0f));
	REQUIRE(z.y == Approx(31.0f));
}

TEST_CASE("mat2 transponieren soll getestet werden_1")
{
	Mat2 v{	1.0f, 12.0f, 
			5.0f, 4.0f};
	v= transpose(v);
	REQUIRE(v.x11 == Approx(1.0f));
	REQUIRE(v.x12 == Approx(5.0f));
	REQUIRE(v.x21 == Approx(12.0f));
	REQUIRE(v.x22 == Approx(4.0f));

}
TEST_CASE("mat2 transponieren soll getestet werden_2")
{
	Mat2 v{	6.0f, 2.0f, 
			4.0f, 8.0f};
	v= transpose(v);
	REQUIRE(v.x11 == Approx(6.0f));
	REQUIRE(v.x12 == Approx(4.0f));
	REQUIRE(v.x21 == Approx(2.0f));
	REQUIRE(v.x22 == Approx(8.0f));

}

TEST_CASE("mat2 make rotation soll getestet werden")
{
	float p = 1;

	Mat2 m2 = make_rotation_mat2(p);
	REQUIRE(m2.x11 == Approx(0.5403f));
	REQUIRE(m2.x12 == Approx(-0.84147f));
	REQUIRE(m2.x21 == Approx(0.84147f));
	REQUIRE(m2.x22 == Approx(0.5403f));
}

int main(int argc, char *argv[])
{

  return Catch::Session().run(argc, argv);
}
