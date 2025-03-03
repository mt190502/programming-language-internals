#include <cstring>
#include <iostream>
#include <string>

int strlen_cst(const char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    std::cout << "arr: " << (void*)arr << " -> " << *arr << std::endl;
    std::cout << "ptr: " << (void*)ptr << " -> " << *ptr << std::endl;
    ptr++;
    std::cout << "ptr: " << (void*)ptr << " -> " << *ptr << std::endl;
    std::cout << "ptr: " << (void*)ptr << " -> " << *(ptr + 1) << std::endl;

    while (*ptr != 5) {
        std::cout << "wptr: " << (void*)ptr << " -> " << *ptr << std::endl;
        ptr++;
    }

    std::cout << "================================================" << std::endl;

    std::cout << "str (" << strlen_cst("Hello") << "): " << "Hello" << std::endl;

    std::cout << "================================================" << std::endl;

    // copy string with c method
    char str[] = "Hello";
    char buffer[100];
    memccpy(buffer, str, '\0', strlen(str) + 1);
    std::cout << "str (" << strlen(buffer) << "): " << buffer << std::endl;

    std::cout << "================================================" << std::endl;

    // copy string with c++ method
    std::string str_cpp = "Hello";
    std::string buffer_cpp = str_cpp;
    std::cout << "str (" << buffer_cpp.length() << "): " << buffer_cpp << std::endl;
    
    return 0;
}
