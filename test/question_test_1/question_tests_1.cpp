#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_primes")
{
	std::vector condition = {2, 3, 5, 7};
	CHECK(get_primes(10) == condition);

	condition.push_back(11); condition.push_back(13);
	CHECK(get_primes(15) == condition);

	condition.push_back(17); condition.push_back(19); condition.push_back(23); condition.push_back(29);
	CHECK(get_primes(30) == condition);

	condition.push_back(31); condition.push_back(37); condition.push_back(41); condition.push_back(43); condition.push_back(47);
	CHECK(get_primes(50) == condition);
}