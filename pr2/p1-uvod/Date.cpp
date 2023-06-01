#include "Date.h"

void Date::create(int day, int month, int year, bool& err) {
    if (Date::isValid(day, month, year)) {
        _day = day;
        _month = month;
        _year = year;
        err = false;
        return;
    }

    err = true;
    _day = _month = 1;
    _year = 2000;  // why is this here idk ...
}

void Date::setDay(int day, bool& err) {
    if (Date::isValid(day, _month, _year)) {
        _day = day;
        err = false;
        return;
    }

    err = true;
}

bool Date::isValid(int day, int month, int year) {
    return true;
}