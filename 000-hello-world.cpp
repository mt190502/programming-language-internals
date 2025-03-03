#include <iostream>
#include <stdio.h>
#include <cstdio>

int main(int argc, char* argv[]) {
    // cpp method
    std::cout << "Hello, World!" << std::endl;

    // c method with namespacing <cstdio>
    std::printf("Hello, World!\n");

    // c method without namespacing (global scope)
    printf("Hello, World!\n");
    return 0;
}