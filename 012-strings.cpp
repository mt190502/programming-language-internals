#include <cstring>
#include <iostream>

int strlen_cst_c(const char* s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int strlen_cst_cpp(const std::string& s) { return s.size(); }

int main(void) {
    // cpp method
    std::string str1 = "Hello, World! 1";
    std::cout << "(" << str1.size() << ") " << str1 << std::endl;
    std::cout << "(" << strlen_cst_cpp(str1) << ") " << str1 << std::endl;

    std::cout << "================================================" << std::endl;

    const char* str2 = "Hello, World! 2";
    std::cout << "(" << strlen(str2) << ") " << str2 << std::endl;

    std::cout << "================================================" << std::endl;

    char str3[] = "Hello, World! 3";
    std::cout << "(" << strlen_cst_c(str3) << ") " << str3 << std::endl;

    std::cout << "================================================" << std::endl;

    char str4[16] = "Hello, World! 4";
    std::cout << "(" << strlen_cst_c(str4) << ") " << str4 << std::endl;

    std::cout << "================================================" << std::endl;

    char str5[16] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', ' ', '5', '\0'};
    std::cout << "(" << strlen_cst_c(str5) << ") " << str5 << std::endl;

    std::cout << "================================================" << std::endl;

    char str6[] = "Hello, World! 6";
    char* copy;
    copy = str6;
    copy[7] = '\0';
    std::cout << "(" << strlen_cst_c(str6) << ") " << str6 << std::endl;

    std::cout << "================================================" << std::endl;

    char str7[] = "Hello, World! 7";
    char copy_buffer[16];
    std::strcpy(copy_buffer, str7);
    copy_buffer[7] = '\0';
    std::cout << "(" << strlen_cst_c(copy_buffer) << ") " << copy_buffer << std::endl;
    std::cout << "(" << strlen_cst_c(str7) << ") " << str7 << std::endl;

    return 0;
}