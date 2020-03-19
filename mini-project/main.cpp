#include <iostream>
#include "employee.hpp"
#include "homeOffice.hpp"

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

    //std::cout << e1 << " and " << e2 << std::endl;

    e2 = e1;
    e2.print();
    //std::cout << e1 << " and himself: " << e2 << std::endl;
}

void testHomeOffice() {
    HomeOffice office;

    Employee e1("Jon", "Skeet", "Chef");
    Employee e2("Greg", "Coomer", "Security Guard");
    Employee e3("third", "3l", "thirdpos");
    Employee e4("fourth", "4l", "fourthpos");

    office.addEmployee(e1);
    office.addEmployee(e2);
    office.addEmployee(e3);
    office.addEmployee(e4);

    office.print();
    std::cout << "Removing Jon" << std::endl;

    office.removeEmployee(0);
    office.print();

    Employee newFirst = office.getEmployee(0);
    newFirst.print();
}

int main() {
    //testEmployee();
    testHomeOffice();
    return 0;
}