#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"


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
	v /= 7.0f;

	REQUIRE(v.x == 5.0f);
	REQUIRE(v.y == -2.0f);
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

int main(int argc, char *argv[])
{

  return Catch::Session().run(argc, argv);
}
