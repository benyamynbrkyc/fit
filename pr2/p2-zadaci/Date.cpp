#include "Date.h"

Date::Date(const int day, const int month, const int year) {
    this->setDay(day);
    this->setMonth(month);
    this->setYear(year);
}

void Date::setDay(int day) {
    if (day > 31 || day < 1) {
        this->day = 0;
        return;
    }

    this->day = day;
}

void Date::setMonth(int month) {
    if (month > 12 || month < 1) {
        this->month = 0;
        return;
    }

    this->month = month;
}

void Date::setYear(int year) {
    if (year < 0 || year > 2023) {
        this->year = 0;
        return;
    }

    this->year = year;
}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}