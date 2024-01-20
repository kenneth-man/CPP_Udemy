#include <iostream>
#include "my_lib.h"
#include <nlohmann/json.hpp>

int main() {
    print_hello_world();

	std::cout << "NLOHMANN_JSON_VERSION_MAJOR: "<< NLOHMANN_JSON_VERSION_MAJOR;

    return 0;
}