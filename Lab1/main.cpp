#include <iostream>
#include <cstdlib>
#include <fmt/format.h>

// to compile g++ -Wall -g main.cpp -o hello
// -Wall enable all warnings
// -g add debug info

int main() {
    fmt::print("this is working {}", 99);
    return EXIT_SUCCESS;
}