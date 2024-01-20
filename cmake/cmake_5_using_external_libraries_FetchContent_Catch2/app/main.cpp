#include <iostream>
#include "../include/my_lib/my_lib.h"
#include "../include/my_lib_2/my_lib_2.h"
#include <nlohmann/json.hpp>

int main() {
    print_hello_world();

	std::cout << "my_lib_2 sum(2, 4): " << sum(2, 4) << '\n';

	std::cout << "NLOHMANN_JSON_VERSION_MAJOR: "<< NLOHMANN_JSON_VERSION_MAJOR;

    return 0;
}