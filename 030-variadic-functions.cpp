#include <iostream>
#include <cstdarg>

int add(int a, ...) {
    va_list args;
    va_start(args, a);
    int sum = a;
    int arg;
    while ((arg = va_arg(args, int)) != 0) {
        sum += arg;
    }
    va_end(args);
    return sum;
}

int main(void) {
    std::cout << "add(1, 2, 3, 4, 5, 0): " << add(1, 2, 3, 4, 5, 0) << std::endl;
    return 0;
}