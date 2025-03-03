#include <iostream>

int main(void) {
    int a = 12;
    if (a == 12) {
        int b = 5;
        std::cout << a << b << std::endl;
    }
    std::cout << a << std::endl; // OK, we're still in a's scope
    // std::cout << b << std::endl; // Error, b is out of scope

    std::cout << "================================================" << std::endl;

    {
        int a = 10;
        std::cout << a << std::endl; // 99
    }
    std::cout << a << std::endl; // 12

    std::cout << "================================================" << std::endl;

    []() {
        int a = 99;
        std::cout << a << std::endl;
    }();
    std::cout << a << std::endl;

    [&a]() {                   // access permission to a
        a = 123;
        std::cout << a << std::endl;
    }();
    std::cout << a << std::endl;
}