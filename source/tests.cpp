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




int main(int argc, char *argv[])
{

  return Catch::Session().run(argc, argv);
}
