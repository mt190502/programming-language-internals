#include "add.hpp"
#include <iostream>

// Compile this flags
// g++ -o main main.cpp add.cpp

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};

    int result = add(sizeof(arr) / sizeof(arr[0]), arr);

    std::cout << "result: " << result << std::endl;

    return 0;
}