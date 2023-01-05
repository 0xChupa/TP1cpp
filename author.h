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
        Author(int id = 0, std::string name = "John", std::string surname = "Doe", Date dateOfBirth = Date(1, 1, 2000));
        std::string getName();
        std::string getSurname();
        int getId();
        Date getDateOfBirth();
        friend std::ostream& operator<<(std::ostream& os, const Author& a);
};