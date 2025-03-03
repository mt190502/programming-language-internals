#include <iostream>

int main(void) {
    char a[] = "Hello, World!";           // signed or unsigned char  (min 1 bytes | min
                                          // value -127 or 0 | max value 127 or 255)
    signed char b[] = "Hello, World!";    // signed char (min 1 bytes | min value
                                          // -127 | max value 127)
    unsigned char c[] = "Hello, World!";  // unsigned char (min 1 bytes | min value
                                          // 0 | max value 255)
    int d = 10;                           // signed int (min 2 bytes | min value -32,768 | max value 32,767)
    short f = 10;                         // signed short int (min 2 bytes | min value -32,768 | max value
                                          // 32,767)
    long e = 10;                          // signed long int (min 4 bytes | min value -2,147,483,648 | max
                                          // value 2,147,483,647)
    long long g = 10;                     // signed long long int (min 8 bytes | min value
                                          // -9,223,372,036,854,775,808 | max value 9,223,372,036,854,775,807)
    unsigned int h = 10;                  // unsigned int (min 2 bytes | min value 0 | max value 65,535)
    unsigned short i = 10;                // unsigned short int (min 2 bytes | min value 0 | max value 65,535)
    unsigned long j = 10;                 // unsigned long int (min 4 bytes | min value 0 | max
                                          // value 4,294,967,295)
    unsigned long long k = 10;            // unsigned long long int (min 8 bytes | min value
                                          // 0 | max value 18,446,744,073,709,551,615)
    float l = 10.0;                       // float (min 4 bytes | min value 1.2E-38 | max value 3.4E+38)
    double m = 10.0;                      // double (min 8 bytes | min value 2.3E-308 | max value 1.7E+308)
    long double n = 10.0;                 // long double (min 10 bytes | min value 3.4E-4932 | max
                                          // value 1.1E+4932)

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "j: " << j << std::endl;
    std::cout << "k: " << k << std::endl;
    std::cout << "l: " << l << std::endl;
    std::cout << "m: " << m << std::endl;
    std::cout << "n: " << n << std::endl;
}