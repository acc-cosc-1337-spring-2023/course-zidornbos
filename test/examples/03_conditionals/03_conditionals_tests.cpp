#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else_if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Get anded results")
{
	REQUIRE(get_anded_result(true, true) == true);
	REQUIRE(get_anded_result(true, false) == false);
	REQUIRE(get_anded_result(false, true) == false);
	REQUIRE(get_anded_result(false, false) == false);
}

TEST_CASE("Get ored results")
{
	REQUIRE(get_ored_result(true, true) == true);
	REQUIRE(get_ored_result(true, false) == true);
	REQUIRE(get_ored_result(false, true) == true);
	REQUIRE(get_ored_result(false, false) == false);
}

TEST_CASE("Get notted results")
{
	REQUIRE(get_notted_result(false) == true);
	REQUIRE(get_notted_result(true) == false);
}

TEST_CASE("Test logical order of precedence")
{
	REQUIRE(get_order_of_ops(true, true, true) == true);
}

TEST_CASE("Test is overtime", "gt 40 returns true")
{
	REQUIRE(is_overtime(39) == false);
	REQUIRE(is_overtime(40) == false);
	REQUIRE(is_overtime(41) == true);
}

TEST_CASE("Test is even")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
	REQUIRE(is_even(100) == true);
}

TEST_CASE("Test get generation")
{
	REQUIRE(get_generation(2023) == "Invalid Year");
	REQUIRE(get_generation(2010) == "Centennial");
	REQUIRE(get_generation(1990) == "Millennial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1900) == "Invalid Year");
}