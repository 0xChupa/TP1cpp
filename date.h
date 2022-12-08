#pragma once

#include <string>
#include <ctime>

class Date {
    private:
        int _day;
        int _month;
        int _year;
    public:
        Date(int day = 1, int month = 1, int year = 2022);
        int getDay();
        int getMonth();
        int getYear();
        std::string getDate();
        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);
        bool isValid();
};