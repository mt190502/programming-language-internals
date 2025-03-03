#include <iostream>

int main(void) {
    int fruit = 1;

    switch (fruit) {
        case 1:
            std::cout << "Apple" << std::endl;
            break;
        case 2:
            std::cout << "Banana" << std::endl;
            break;
        case 3:
            std::cout << "Cherry" << std::endl;
            break;
        default:
            std::cout << "Unknown" << std::endl;
            break;
    }

    return 0;
}