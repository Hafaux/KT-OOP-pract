#include "homeOffice.hpp"
#include <iostream>

const short INITIAL_CAPACITY = 10;
const short EMPTY_OFFICE = -1;

HomeOffice::HomeOffice() {
    employees = new Employee[INITIAL_CAPACITY];
    capacity = INITIAL_CAPACITY;
    top = EMPTY_OFFICE;
}

bool HomeOffice::full() const {
    return top == capacity - 1;
}

void HomeOffice::addEmployee(Employee const & e) {
    if (full()) 
        resize();

    top++;
    employees[top] = e; 
}

// TODO: remove by name
void HomeOffice::removeEmployee(int index) {
    for (int i = index; i < top; i++) {
        employees[i] = employees[i + 1];
    }
    
    top--;
}

void HomeOffice::resize() {
    int newCapacity = capacity + INITIAL_CAPACITY;

    Employee *newEmployees = new Employee[newCapacity];

    for (int i = 0; i < capacity; i++) {
        newEmployees[i] = employees[i];
    }

    capacity = newCapacity;
    delete[] employees;
    employees = newEmployees;
}

void HomeOffice::print()  {
    for (int i = 0; i <= top; i++) {
        employees[i].print();
    }
}

HomeOffice::~HomeOffice() {
    delete[] employees;
}