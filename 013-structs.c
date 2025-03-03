#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int age;
    float salary;
};

void display_employee(struct employee* em) { printf("=== Employee ===\nName: %s\nAge: %d\nSalary: %.2f\n", em->name, em->age, em->salary); }

int main(void) {
    struct employee em1;

    printf("Enter name: ");
    char buffer[50];
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    strcpy(em1.name, buffer);

    printf("Enter age: ");
    scanf("%d", &em1.age);

    printf("Enter salary: ");
    scanf("%f", &em1.salary);

    display_employee(&em1);

    printf("====================================\n");

    struct employee employee2 = {"John Doe", 30, 1000.00};
    display_employee(&employee2);

    printf("====================================\n");

    struct employee employee3 = {.age = 25, .name = "Jane Doe", .salary = 2000.00};
    display_employee(&employee3);

    return 0;
}