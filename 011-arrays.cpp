#include <cstddef>
#include <iostream>

int add_all_elements(int argc, int* argv) {
    int sum = 0;
    for (int i = 0; i < argc; i++) {
        sum += argv[i];
    }
    return sum;
}

int main(void) {
    int i;
    float f[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    for (int i = 0; i < 5; i++) {
        std::cout << "f[" << i << "] = " << f[i] << std::endl;
    }

    std::cout << sizeof(f) << " bytes: " << sizeof(f) / sizeof(float) << " elements" << std::endl;

    std::cout << "================================================" << std::endl;

    int arr[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}};

    size_t x = sizeof(arr) / sizeof(arr[0]);
    size_t y = sizeof(arr[0]) / sizeof(arr[0][0]);
    size_t z = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);

    std::cout << sizeof(arr) << " bytes: (" << x << " x " << y << " x " << z << ") x int" << std::endl;

    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < y; j++) {
            for (size_t k = 0; k < z; k++) {
                std::cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << std::endl;
            }
        }
    }

    std::cout << "================================================" << std::endl;

    int arr2[] = {12, 2, 3};
    int* p = arr2;

    std::cout << p[0] << std::endl;
    std::cout << *(p + 0) << std::endl;

    std::cout << "================================================" << std::endl;

    int arr3[5] = {1, 2, 3, 4, 5};
    int sum = add_all_elements(sizeof(arr3) / sizeof(int), arr3);
    std::cout << arr3 << " == " << &arr3 << " == " << arr3 + 0 << std::endl;
    std::cout << "Sum of all elements: " << sum << std::endl;
}