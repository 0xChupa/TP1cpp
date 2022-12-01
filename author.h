#pragma once

#include <iostream>
#include <string>
#include "date.h"
class Author {
    private:
        int _id;
        std::string _name;
        std::string _surname;
        Date _dateOfBirth;
    public:
        Author(std::string name, std::string surname, Date dateOfBirth, int id);
        std::string getName();
        std::string getSurname();
        int getId();
};