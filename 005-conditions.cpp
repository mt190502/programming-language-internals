#include <iostream>

int main(void) {
    int a = 1;
    int b = 0;

    std::cout << "condition (a == b): " << ((a == b) ? "true" : "false") << std::endl;
    std::cout << "condition (a != b): " << ((a != b) ? "true" : "false") << std::endl;
    std::cout << "condition (a  > b): " << ((a  > b) ? "true" : "false") << std::endl;
    std::cout << "condition (a <  b): " << ((a <  b) ? "true" : "false") << std::endl;
    std::cout << "condition (a >= b): " << ((a >= b) ? "true" : "false") << std::endl;
    std::cout << "condition (a <= b): " << ((a <= b) ? "true" : "false") << std::endl;

    if (!(a == 1)) {
        std::cout << "a is not equal to 1" << std::endl;
    } else {
        std::cout << "a is equal to 1" << std::endl;
    }

    return 0;
}