#include <iostream>
#include <string>
#include "date.h"

Date::Date(int day, int month, int year) {
    _day = day;
    _month = month;
    _year = year;
}

int Date::getDay() {
    return _day;
}

int Date::getMonth() {
    return _month;
}

int Date::getYear() {
    return _year;
}

void Date::setDay(int day) {
    _day = day;
}

void Date::setMonth(int month) {
    _month = month;
}

void Date::setYear(int year) {
    _year = year;
}

bool Date::isValid() {
    if (_day < 1 || _day > 31) {
        return false;
    }
    if (_month < 1 || _month > 12) {
        return false;
    }
    if (_year < 0 || _year > 2022) {
        return false;
    }
    return true;
    if (_month == 2 && _day > 28) {
        return false;
    }
    if (((_month == 4) || (_month == 6) || (_month == 9) || (_month == 11)) && (_day > 30)) {
        return false;
    }
}