#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get gross pay default parameters")
{
	REQUIRE(get_gross_pay() == 800);//default hours and pay
	REQUIRE(get_gross_pay(30,20) == 600);
	REQUIRE(get_gross_pay(40) == 800);
	REQUIRE(get_gross_pay(40,20) == 800);
	REQUIRE(get_gross_pay(41,20) == 820);
	REQUIRE(get_gross_pay(20) == 400);
}

TEST_CASE("Test get gross pay function overload")
{
	REQUIRE(get_gross_pay(40, 7.5) == 300);
	REQUIRE(get_gross_pay(40, 20, 100) == 801);
}

