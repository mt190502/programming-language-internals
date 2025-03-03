#include <iostream>

int main(void) {
    // Pointers
    // A pointer is a variable that stores the memory address of another variable
    int x = 10;
    int y = 20;

    int* p = &x;    // p is a int pointer to x
    int** q = &p;   // q is a int pointer to p
    int*** r = &q;  // r is a int pointer to q

    void* v = &x;   // v is a void pointer to x (void* is a generic pointer)
    *(int*)v = 30;  // Cast v to int* and assign 30 to the value pointed by v

    std::cout << "x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Void pointer v: " << *(int*)v << std::endl;

    std::cout << "================================================" << std::endl;

    // Reference values
    // A reference is an alias to a variable
    int& a = x;  // a is a reference to x
    int& b = a;  // b is a reference to a
    b = 40;      // Assign 40 to the value of x

    std::cout << "x: " << x << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}