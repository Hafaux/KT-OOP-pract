#ifndef __EMPLOYEE_HPP
#define __EMPLOYEE_HPP

class Employee {
    char * firstName;
    char * lastName;
    char * position;

    void setFirstName(char const *first);
    void setLastName(char const *last);
public:
    Employee(char const * firstName = "<first>", 
             char const * lastName = "<last>",
             char const * position = "<pos>");

    // Copy constructor
    Employee(Employee const &);

    ~Employee();

    // Predefined =
    Employee & operator=(Employee const &);

    char const * getFirstName() const { return firstName; }
    char const * getLastName() const { return lastName; }
    char const * getPosition() const { return position; }

    void setName(char const *first, char const *last);
    void setPosition(char const *pos);

    void print() const;
    // friend std::ostream & operator<<(std::ostream &, Employee const &);
};

#endif