#include <cstdlib>
#include <iostream>

int main(void) {
    char s[10] = "1234";
    int atoi_var = std::atoi(s);
    float atof_var = std::atof(s);
    long int atol_var = std::atol(s);
    long long int atoll_var = std::atoll(s);

    std::cout << "atoi_var: " << atoi_var << std::endl;
    std::cout << "atof_var: " << atof_var << std::endl;
    std::cout << "atol_var: " << atol_var << std::endl;
    std::cout << "atoll_var: " << atoll_var << std::endl;

    std::cout << "================================================" << std::endl;

    const char* s2 = "1234";
    long int strtol_var = std::strtol(s2, nullptr, 10);
    long long int strtoll_var = std::strtoll(s2, nullptr, 10);
    unsigned long int strtoul_var = std::strtoul(s2, nullptr, 10);
    unsigned long long int strtoull_var = std::strtoull(s2, nullptr, 10);
    float strtof_var = std::strtof(s2, nullptr);
    double strtod_var = std::strtod(s2, nullptr);
    long double strtold_var = std::strtold(s2, nullptr);

    std::cout << "strtol_var: " << strtol_var << std::endl;
    std::cout << "strtoll_var: " << strtoll_var << std::endl;
    std::cout << "strtoul_var: " << strtoul_var << std::endl;
    std::cout << "strtoull_var: " << strtoull_var << std::endl;
    std::cout << "strtof_var: " << strtof_var << std::endl;
    std::cout << "strtod_var: " << strtod_var << std::endl;
    std::cout << "strtold_var: " << strtold_var << std::endl;

    std::cout << "================================================" << std::endl;

    int s3 = 1234;
    void* ptr = &s3;
    int* ptr2 = (int*)ptr;
    std::cout << "ptr2: " << (void*)ptr2 << " -> " << *ptr2 << std::endl;

    std::cout << "================================================" << std::endl;

    const int s4 = 1234;
    long int s4_long = (long int)s4 + 10;
    std::cout << "s4_long: " << s4_long << std::endl;

    return 0;
}