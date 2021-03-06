#include <iostream>
#include <cstring>
#include "employee.hpp"

Employee::Employee(char const *_firstName, 
                   char const *_lastName,
                   char const *_position) {
    firstName = nullptr;
    lastName = nullptr;
    position = nullptr;
    setName(_firstName, _lastName);
    setPosition(_position);
}

Employee::Employee(Employee const &e) {
    firstName = e.firstName;
    lastName = e.lastName;
    position = e.position;
}

void Employee::setFirstName(char const *_firstName) {
    delete[] firstName;
    firstName = new char[strlen(_firstName) + 1];
    strcpy(firstName, _firstName);
}

void Employee::setLastName(char const *_lastName) {
    delete[] lastName;
    lastName = new char[strlen(_lastName) + 1];
    strcpy(lastName, _lastName);
}

void Employee::setName(char const *first, char const *last) {
    setFirstName(first);
    setLastName(last);
}

void Employee::setPosition(char const *_position) {
    delete[] position;
    position = new char[strlen(_position) + 1];
    strcpy(position, _position);
}

void Employee::print() const {
    std::cout << getFirstName() << " " << getLastName() << ": "
              << getPosition() << std::endl;
}

// I get "error: 'ostream' in namespace 'std' does not name a type
//        friend std::ostream & operator<<(std::ostream &, Employee const &);""
// It worked fine before I added homeOffice.cpp :/

// std::ostream & operator<<(std::ostream &out, Employee const &e) {
//     out << e.getFirstName() << " " << e.getLastName() << ": " << e.getPosition();
//     return out;
// }

Employee & Employee::operator=(Employee const &e) {
    firstName = e.firstName;
    lastName = e.lastName;
    position = e.position;

    return *this;
}

Employee::~Employee() {
    delete[] firstName;
    delete[] lastName;
    delete[] position;
}