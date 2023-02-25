#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Verify factorial of a number")
{
	REQUIRE(factorial(3) == 6);
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(6) == 720);
	REQUIRE(factorial(8) == 40320);
}
