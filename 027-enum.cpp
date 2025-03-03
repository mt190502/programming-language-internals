#include <iostream>

enum numbers { A = 1, B, C };
enum { D = 3, E, F = 10, G, H = 4, I };
enum { J = 3, K = 3, L = 3 };
enum { X, Y, Z };

typedef enum { ZERO, ONE, TWO, THREE } numbers2;

int main(void) {
    std::cout << "A: " << A << " - B: " << B <<  " - C: " << C << std::endl;
    std::cout << "X: " << X << " - Y: " << Y <<  " - Z: " << Z << std::endl;
    std::cout << "D: " << D << " - E: " << E <<  " - F: " << F << " - G: " << G << " - H: " << H << " - I: " << I << std::endl;
    std::cout << "J: " << J << " - K: " << K <<  " - L: " << L << std::endl;

    enum numbers n = A;
    std::cout << "n: " << n << std::endl;

    numbers2 n2 = TWO;
    std::cout << "n2: " << n2 << std::endl;

    return 0;
}