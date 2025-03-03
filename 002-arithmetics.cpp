#include <iostream>

int main(void) {
    int a = 20;
    int b = 10;

    int c = a + b;
    std::cout << "a + b = " << c << std::endl;

    c = a - b;
    std::cout << "a - b = " << c << std::endl;

    c = a * b;
    std::cout << "a * b = " << c << std::endl;

    c = a / b;
    std::cout << "a / b = " << c << std::endl;

    // pre-increment
    std::cout << "a (++a) = " << ++a << std::endl;   // a = 20 -> (21)
    std::cout << "a = " << 5 + ++a << std::endl;     // a = 21 -> (22) + 5 = 27

    // post-increment
    std::cout << "b (b++) = " << b++ << std::endl;   // b = (10) -> 11
    std::cout << "b = " <<  5 + b++ << std::endl;    // b = (11) + 5 = 16
    std::cout << "b = " << b << std::endl;           // b = 12

    return 0;
}