#include <cstring>
#include <cstdio>
#include <iostream>

int main(void) {
    // char: 1 byte (-128 to 127)
    char c = 'A';

    // bool: 1 byte (true or false) [0 or 1] 
    bool b = true;

    // int: 4 bytes (-2,147,483,648 to 2,147,483,647)
    int x = 1;

    // float: 4 bytes (1.2e-38 to 3.4e+38)
    float f = 1.0;

    // double: 8 bytes (2.3e-308 to 1.7e+308)
    double d = 1.0;

    // const char* (string literal pointer) 8 bytes (64-bit) or 4 bytes (32-bit)
    // note: we will use const for string literals
    const char* s = "Hello, World!";
    // cpp method
    std::string str = "Hello, World!";

    std::printf("c (%2ld bytes): %c\n", sizeof(c), c);
    std::printf("b (%2ld bytes): %d\n", sizeof(b), b);
    std::printf("x (%2ld bytes): %d\n", sizeof(x), x);
    std::printf("f (%2ld bytes): %f\n", sizeof(f), f);
    std::printf("d (%2ld bytes): %f\n", sizeof(d), d);
    std::printf("s (%2ld bytes): %s\n", std::strlen(s), s); // strlen() from <cstring>
    std::cout << "str: " << str << std::endl;

    std::cout << "================================================" << std::endl;

    std::printf("%7s | %11s | %5s | %8s\n", "Decimal", "Hexadecimal", "Octal", "Integer");
    std::printf("--------|-------------|-------|---------\n");
    for (int i = 0; i < 20; i++) {
        std::printf("%1$7i | %1$#11x | %1$#5o | %1$8d\n", i);
    };

    return 0;
}