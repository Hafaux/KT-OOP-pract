#ifndef __HOMEOFFICE_HPP
#define __HOMEOFFICE_HPP
#include "employee.hpp"

class HomeOffice {
    Employee *employees;
    int capacity;  // current capaity
    int top;

    bool full() const;

    void resize();
public:
    HomeOffice();
    ~HomeOffice();

    Employee getEmployee(int index) const { return employees[index]; }


    void addEmployee(Employee const &);
    void removeEmployee(int);
    int currCapacity() const { return capacity; }


    void print();
};

#endif