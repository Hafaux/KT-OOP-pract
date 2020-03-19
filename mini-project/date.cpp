#include "date.hpp"

Date::Date() {
    day = 1;
    month = 1;
    year = 1970;
}

Date::Date(unsigned d, unsigned m, unsigned y) {
    day = d;
    month = m;
    year = y;
}