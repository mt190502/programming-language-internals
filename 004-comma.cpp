#include <iostream>

int main(void) {
    int x = 10, y = 20, z = 30;
    int a = (100, 200, 300);

    std::cout << "a = " << a << std::endl;  // 300 because the last value is assigned to a

    return 0;
}