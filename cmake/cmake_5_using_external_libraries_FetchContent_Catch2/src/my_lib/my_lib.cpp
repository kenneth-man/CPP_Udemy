#include <iostream>
#include "../../include/my_lib/my_lib.h"

void print_hello_world() {
    std::cout << "Hello World!!\n";
}

uint32_t factorial(uint32_t number) {
    return number <= 1 ? 1 : factorial(number-1) * number;
}
