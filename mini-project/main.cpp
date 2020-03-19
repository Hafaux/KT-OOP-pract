#include <iostream>
#include "employee.hpp"

void testEmployee() {
    Employee e1;
    e1.print();

    e1.setPosition("Janitor");
    e1.print();

    e1.setName("Jim", "Santano");
    e1.print();

    char const *name = e1.getFirstName();
    std::cout << name << std::endl;

    Employee e2("Greg", "Coomer", "Security Guard");
    e2.print();

    std::cout << e1 << " and " << e2 << std::endl;

    e2 = e1;
    std::cout << e1 << " and himself: " << e2 << std::endl;
}

int main() {
    testEmployee();
    return 0;
}