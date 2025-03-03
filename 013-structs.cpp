#include <cstdio>
#include <cstring>
#include <iostream>

struct employee {
    char name[50];
    int age;
    float salary;
};

void display_employee(struct employee* em) { 
    std::cout << "=== Employee ===" << std::endl;
    std::cout << "Name: " << em->name << std::endl;
    std::cout << "Age: " << em->age << std::endl;
    std::cout << "Salary: " << em->salary << std::endl;
}

int main(void) {
    struct employee em1;

    std::cout << "Enter name: " << std::endl;
    char buffer[50];
    std::cin >> buffer;
    buffer[strcspn(buffer, "\n")] = '\0';
    std::strcpy(em1.name, buffer);
    
    std::cout << "Enter age: " << std::endl;
    std::cin >> em1.age;

    std::cout << "Enter salary: " << std::endl;
    std::cin >> em1.salary;
    
    display_employee(&em1);

    std::cout << "================================================" << std::endl;

    struct employee employee2 = {"John Doe", 30, 1000.00};
    display_employee(&employee2);

    /*
        ISO C++11 does not allow this
    */
    // struct employee employee3 = {.age = 25, .name = "Jane Doe", .salary = 2000.00};
    // display_employee(&employee3);

    return 0;
}