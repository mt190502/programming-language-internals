#include <iostream>

int add(int argc, int* argv) {
    int sum = 0;
    for (int i = 0; i < argc; i++) {
        sum += argv[i];
    }
    return sum;
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5};
    int z = add(sizeof(numbers) / sizeof(numbers[0]), numbers);
    std::cout << "Sum: " << z << std::endl;
    return 0;
}