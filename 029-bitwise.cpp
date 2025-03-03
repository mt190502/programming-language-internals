#include <iostream>

int main(void) {
    std::cout << "0 & 0 = " << (0 & 0) << std::endl;  // and
    std::cout << "0 | 0 = " << (0 | 0) << std::endl;  // or
    std::cout << "0 ^ 0 = " << (0 ^ 0) << std::endl;  // xor
    std::cout << "~0 = " << ~0 << std::endl;          // not
}