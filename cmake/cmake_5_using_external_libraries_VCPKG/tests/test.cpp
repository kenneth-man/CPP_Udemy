// Tells `Catch2` to provide a `main()` - only do this once
#define CATCH_CONFIG_MAIN

#include <catch2/catch_all.hpp>

#include "my_lib.h"

TEST_CASE("Factorials are computed", "[factorial]")
{
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}