#include <cstdint>
#include <cstdio>
#include <iostream>

void sqrt_cst(int a) { std::cout << "sqrt_cst: " << a * a << std::endl; }

int main(void) {
    int t = 10;
    int* u = &t;
    int** v = &u;
    int*** w = &v;
    int**** x = &w;
    int***** y = &x;
    int****** z = &y;
    std::cout << "t: " << t << std::endl;
    std::cout << "u: " << u << "(u) -> " << *u << std::endl;
    std::cout << "v: " << v << "(u) -> " << *v << "(t) -> " << **v << std::endl;
    std::cout << "w: " << w << "(v) -> " << *w << "(u) -> " << **w << "(t) -> " << ***w << std::endl;
    std::cout << "x: " << x << "(w) -> " << *x << "(v) -> " << **x << "(u) -> " << ***x << "(t) -> " << ****x << std::endl;
    std::cout << "y: " << y << "(x) -> " << *y << "(w) -> " << **y << "(v) -> " << ***y << "(u) -> " << ****y << "(t) -> " << *****y << std::endl;
    std::cout << "z: " << z << "(y) -> " << *z << "(x) -> " << **z << "(w) -> " << ***z << "(v) -> " << ****z << "(u) -> " << *****z << "(t) -> " << ******z << std::endl;

    std::cout << "================================================" << std::endl;

    int a = 10;
    int* const p = &a;
    int* const* q = &p;
    int* const** r = &q;
    std::cout << "a: " << a << std::endl;
    std::cout << "p: " << p << "(a) -> " << *p << std::endl;
    std::cout << "q: " << q << "(p) -> " << *q << "(a) -> " << **q << std::endl;
    std::cout << "r: " << r << "(q) -> " << *r << "(p) -> " << **r << "(a) -> " << ***r << std::endl;
    
    std::cout << "================================================" << std::endl;

    int b = 10;
    int* const c = &b;
    const int* d = &b;
    (*c)++;
    d++;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << "(b) -> " << *c << std::endl;
    
    std::cout << "================================================" << std::endl;

    void (*f)(int) = sqrt_cst;
    f(10);
}