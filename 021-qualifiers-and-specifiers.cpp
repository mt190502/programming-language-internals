#include <iostream>

int main(void) {
    int x = 10;
    const int y = 20;
    int z = 30;

    int* ptr = &x;

    //          +----------> integer pointer
    //          |      +---> const integer pointer address
    //          |      |
    //         vvv    vvv
    const int* ptr2 = &y;
    int* const ptr3 = &z;
    //         ^^^    ^^^
    //          |      |
    //          |      +---> integer pointer address
    //          +----------> constant pointer

    std::cout << "x: " << &ptr[0] << " -> " << *ptr << std::endl;
    std::cout << "y: " << &ptr2[0] << " -> " << *ptr2 << std::endl;
    std::cout << "z: " << &ptr3[0] << " -> " << *ptr3 << std::endl;

    (*ptr)++;
    (ptr2)++;   // if (*ptr2)++; is used, it will throw an error because it is a constant value
    (*ptr3)++;  // if (ptr3)++; is used, it will throw an error because it is a constant pointer

    std::cout << "x: " << &ptr[0] << " -> " << *ptr << std::endl;
    std::cout << "y: " << &ptr2[0] << " -> " << *ptr2 << std::endl;
    std::cout << "z: " << &ptr3[0] << " -> " << *ptr3 << std::endl;

    std::cout << "================================================" << std::endl;

    // restrict: restrict keyword is used to indicate that a pointer is the only
    // pointer that will access the data it points to.
    int* __restrict ptr4 = &x;
    printf("x: %p -> %d\n", &ptr4[0], *ptr4);

    std::cout << "================================================" << std::endl;

    // volatile: volatile keyword is used to indicate that a variable's value can
    // be changed by something outside the scope of the program.
    volatile int v = 10;
    volatile int* ptr5 = &v;
    printf("v: %p -> %d\n", &ptr5[0], *ptr5);

    std::cout << "================================================" << std::endl;

    // static: static keyword is used to declare a variable that is to be shared
    // among all instances of a class.
    static int s = 10;
    printf("s: %p -> %d\n", &s, s);

    std::cout << "================================================" << std::endl;

    // extern: extern keyword is used to declare a global variable that is defined
    // in another file.
    extern int e;

    return 0;
}