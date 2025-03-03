#include <iostream>

int main(void) {
    int a = 10, b = 20, c = 30;

    if ((a < b) && (b < c)) {
        std::cout << "a is less than b and b is less than c" << std::endl;
    } else {
        std::cout << "a is not less than b and b is not less than c" << std::endl;
    }
    
    std::cout << "================================================" << std::endl;

    a = 10;
    b = 20;

    while (a < b) {
        std::cout << "a: " << a << std::endl;
        a++;
    }
    
    std::cout << "================================================" << std::endl;

    a = 10;
    b = 20;

    do {
        std::cout << "a: " << a << std::endl;
        a--;
    } while ((0 < a) && (a < b));
    
    std::cout << "================================================" << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << "i: " << i << std::endl;
    }
    
    std::cout << "================================================" << std::endl;

    while (1) {
        std::cout << "Hello" << std::endl;
    }

    for (;;) {
        std::cout << "Hello" << std::endl;
    }

    return 0;
}