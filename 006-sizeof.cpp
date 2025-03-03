#include <cstddef>
#include <iostream>

int main(void) {
    int num = 999;

    // zu is a format specifier for size_t (unsigned integer)
    std::cout << "num: " << num << " | sizeof(num): " << sizeof(num) << " bytes" << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << " bytes" << std::endl;

    size_t size = sizeof(num);
    std::cout << "size: " << size << " | sizeof(size): " << sizeof(size) << " bytes" << std::endl;

    return 0;
}