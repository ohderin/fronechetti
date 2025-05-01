#include <stdio.h>

struct employee {
    unsigned int id : 10;
    unsigned int depart : 3;
    unsigned int years : 5;
    unsigned int manager : 1;
};

int main() {
    struct employee Employee;

    Employee.id = 512;
    Employee.depart = 5;
    Employee.years = 10;
    Employee.manager = 1;

    printf("Employee ID: %d\n", Employee.id);
    printf("Department: %d\n", Employee.depart);
    printf("Years of Experience: %d\n", Employee.years);
    printf("Manager: %d\n", Employee.manager);

    return 0;
}
