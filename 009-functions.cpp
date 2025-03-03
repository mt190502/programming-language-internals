#include <iostream>

int add(int argc, int* argv) {
    int sum = 0;
    for (int i = 0; i < argc; i++) {
        sum += argv[i];
    }
    return sum;
}

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50, 100, 200, 1000};
    int z = add(sizeof(numbers) / sizeof(numbers[0]), numbers);
    std::cout << "Sum: " << z << std::endl;
    return 0;
}