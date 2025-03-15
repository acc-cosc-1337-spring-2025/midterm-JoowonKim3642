#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test_get_hours"){
	REQUIRE(get_hours(1570846218) == 2);
	REQUIRE(get_hours(1570875018) == 10);
}

TEST_CASE("test_get_minutes"){
	REQUIRE(get_minutes(1570846218) == 10);
	REQUIRE(get_minutes(1570875018) == 10);
}

TEST_CASE("test_get_seconds"){
	REQUIRE(get_seconds(1570846218) == 18);
	REQUIRE(get_seconds(1570875018) == 18);
}