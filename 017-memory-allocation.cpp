#include <cstdlib>
#include <iostream>

int main(void) {
    int* ptr = (int*)std::malloc(sizeof(int));
    if (!ptr) {
        std::cerr << "Memory allocation failed" << std::endl;
        return 1;
    }

    std::cout << "before: " << (void*)ptr << " -> " << *ptr << std::endl;
    *ptr = 5;
    std::cout << "ptr: " << (void*)ptr << " -> " << *ptr << std::endl;
    std::free(ptr);
    std::cout << "after: " << (void*)ptr << " -> " << *ptr << std::endl;

    std::cout << "================================================" << std::endl;

    int* ptr2 = (int*)std::calloc(10, sizeof(int));
    if (!ptr2) {
        std::cerr << "Memory allocation failed" << std::endl;
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        *(ptr2 + i) = i * 10;
        std::cout << "ptr2[" << i << "]: " << (void*)(ptr2 + i) << " -> " << *(ptr2 + i) << std::endl;
    }
    std::free(ptr2);

    return 0;
}