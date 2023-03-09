#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify GC-content function calculation")
{
	double result = get_gc_content("AGCTATAG");
	REQUIRE(result == .375);
}	

TEST_CASE("Testing GC-content with different variable")
{	
	double second_result = get_gc_content("CGCTATAG");
	REQUIRE(second_result == .50);
}

TEST_CASE("Verify reverse string function")
{
	std::string result = get_reverse_string("AGCTATAG");
	REQUIRE(result =="GATATCGA");

	std::string outcome = get_reverse_string("CGCTATAG");
	REQUIRE(outcome == "GATATCGC");
}

TEST_CASE("Verify complement function")
{
	std::string result = get_dna_complement("AAAACCCGGT");
	REQUIRE(result == "ACCGGGTTTT");

	std::string outcome = get_dna_complement("CCCGGAAAAT");
	REQUIRE(outcome == "ATTTTCCGGG");
}