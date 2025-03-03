#include <iostream>

int main(void) {
    int a = 1;
    int b = 0;

    // Ternary operator
    // (condition) ? true : false
    int c = (a > b) ? a : b;
    std::cout << "c = " << c << std::endl;

    int d = (a < b) ? a : b;
    std::cout << "d = " << d << std::endl;

    std::cout << "The number " << a << " is " << ((a % 2 == 0) ? "even" : "odd") << std::endl;
    return 0;
}