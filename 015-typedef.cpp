#include <iostream>

typedef int custom_int_t;
typedef int custom_arr_t[10];
typedef struct animal {
    char name[20];
    int age;
} animal_t;

int main(void) {
    custom_int_t a = 10;
    std::cout << "a: " << a << std::endl;

    std::cout << "================================================" << std::endl;

    animal_t dog = {"Dog", 5};
    std::cout << "Name: " << dog.name << std::endl;
    std::cout << "Age: " << dog.age << std::endl;

    std::cout << "================================================" << std::endl;

    custom_arr_t arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
    }

    return 0;
}