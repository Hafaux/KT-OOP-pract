#ifndef __DATE_HPP
#define __DATE_HPP
#include <iostream>

class Date {
    unsigned day;
    unsigned month;
    unsigned year;

    unsigned getDay() const { return day; }
    unsigned getMonth() const { return month; }
    unsigned getYear() const { return year; }
public:
    Date();
    Date(unsigned, unsigned, unsigned);
    
    void setDay(unsigned d) { day = d; }
    void setMonth(unsigned m) { month = m; }
    void setYear(unsigned y)  { year = y; }

    void printDatenl() {
        printDate();
        std::cout << std::endl;
    }

    void printDate() {
        std::cout << getDay() << "/" << getMonth() << "/" << getYear();
    }
};

#endif