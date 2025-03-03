#include <cstdio>
#include <cstdlib>
#include <iostream>

#define MAX_PASSENGERS 10

struct cabin_info {
    int num_windows;
    int o2_level;
};

struct passenger {
    std::string name;
    int age;
};

struct spaceship {
    std::string manufacturer;
    struct cabin_info cabin_inf;
    struct passenger passenger[MAX_PASSENGERS];
};

int main() {
    struct spaceship my_ship = {.manufacturer = "NASA", .cabin_inf = {.num_windows = 4, .o2_level = 21}};

    std::cout << "Manufacturer: " << my_ship.manufacturer << std::endl;
    std::cout << "Number of windows: " << my_ship.cabin_inf.num_windows << std::endl;
    std::cout << "O2 level: " << my_ship.cabin_inf.o2_level << std::endl;

    std::cout << "================================================" << std::endl;

    struct passenger p1 = {.name = "Alice", .age = 25};
    struct passenger p2 = {.name = "Bob", .age = 30};

    my_ship.passenger[0] = p1;
    my_ship.passenger[1] = p2;

    std::cout << "Passenger 1: " << my_ship.passenger[0].name << ", " << my_ship.passenger[0].age << std::endl;
    std::cout << "Passenger 2: " << my_ship.passenger[1].name << ", " << my_ship.passenger[1].age << std::endl;

    std::cout << "================================================" << std::endl;

    struct {
        std::string name;
        int age;
    } x, y, z;

    x.name = "Charlie";
    x.age = 35;

    y.name = "David";
    y.age = 40;

    z.name = "Eve";
    z.age = 45;

    std::cout << "Passenger 3: " << x.name << ", " << x.age << std::endl;
    std::cout << "Passenger 4: " << y.name << ", " << y.age << std::endl;
    std::cout << "Passenger 5: " << z.name << ", " << z.age << std::endl;

    std::cout << "================================================" << std::endl;

    struct node {
        int data;
        struct node* next;
    };
    struct node* head;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 11;
    head->next = (struct node*)malloc(sizeof(struct node));
    head->next->data = 22;
    head->next->next = (struct node*)malloc(sizeof(struct node));
    head->next->next->data = 33;

    for (struct node* current = head; current != NULL; current = current->next) {
        std::cout << current->data << std::endl;
    }

    return 0;
}