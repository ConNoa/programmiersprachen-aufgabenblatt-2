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





int main(int argc, char *argv[])
{

  return Catch::Session().run(argc, argv);
}
