#include <catch2/catch_test_macros.hpp>
#include "../../include/my_lib_2/my_lib_2.h"

TEST_CASE("Sum returns correct value", "[sum]") {
    REQUIRE(sum(3, 3) == 6);
	REQUIRE(sum(1, 69) == 70);
}