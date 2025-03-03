#include "add.hpp"
#include "minus.hpp"
#include <iostream>

// Compile after creating the object files (add.o and minus.o)
// g++ -o main main.cpp add.o minus.o

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};

    int result = add(sizeof(arr) / sizeof(arr[0]), arr);

    std::cout << "result: " << result << std::endl;

    std::cout << "================================================" << std::endl;

    int val1 = 10, val2 = 5;

    int result2 = minus(val1, val2);

    std::cout << "result2: " << result2 << std::endl;

    return 0;
}