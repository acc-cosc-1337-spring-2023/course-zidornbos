#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "casting.h"
#include "constants.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test operator precedence 1")
{
	REQUIRE(operator_precedence_1(12, 6, 3) == 14);
}

TEST_CASE("Test operator precedence 2")
{
	REQUIRE(operator_precedence_2(12, 6, 3) == 6);
}
TEST_CASE("Test convert int to double")
{
	REQUIRE(convert_to_double(10, .51) == 5.1);
}

TEST_CASE("Test double to an int")
{
	REQUIRE(convert_double_to_int(10.5) == 10);
}

TEST_CASE("Verify get area of circle")
{
	REQUIRE(get_area_of_circle(10) == 314.159);
}
