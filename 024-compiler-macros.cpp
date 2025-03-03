#include <iostream>

#define TEST_MODE 1

#ifndef TEST_MODE
#error "TEST_MODE is not defined"
#endif

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((a) / (b))
#define MOD(a, b) ((a) % (b))
#define POW(a, b) ((a) ^ (b))

#define X(...) #__VA_ARGS__
#define STR(x) #x

#define PRINT_NUMS_TO_PRODUCT(a, b)         \
    do {                                    \
        int product = (a) * (b);            \
        for (int i = 0; i < product; i++) { \
            std::cout << i << std::endl;    \
        }                                   \
    } while (0)

#define PI 3.14159265358979323846

int main() {
#if TEST_MODE
    std::cout << "This function: " << __func__ << std::endl;
    std::cout << "This file: " << __FILE__ << std::endl;
    std::cout << "This line: " << __LINE__ << std::endl;
    std::cout << "Compiled on: " << __DATE__ << " " << __TIME__ << std::endl;
    std::cout << "C++ Version: " << __cplusplus << std::endl;
    std::cout << "X: " << X(1, 2, 3, 4, 5) << std::endl;
    std::cout << "STR: " << STR(123) << std::endl;
    PRINT_NUMS_TO_PRODUCT(2, 3);
#else
    std::cout << "ADD(1, 2): " << ADD(1, 2) << std::endl;
    std::cout << "SUB(1, 2): " << SUB(1, 2) << std::endl;
    std::cout << "MUL(1, 2): " << MUL(1, 2) << std::endl;
    std::cout << "DIV(1, 2): " << DIV(1, 2) << std::endl;
    std::cout << "MOD(1, 2): " << MOD(1, 2) << std::endl;
    std::cout << "POW(1, 2): " << POW(1, 2) << std::endl;
#endif
    std::cout << "TEST_MODE: " << TEST_MODE << std::endl;
#undef TEST_MODE
    std::cout << "PI: " << PI << std::endl;
    return 0;
}