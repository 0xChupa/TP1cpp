#include <string> 
#include <iostream>
#include "author.h"

Author::Author(int id, std::string name, std::string surname, Date dateOfBirth) {
    _name = name;
    _surname = surname;
    _dateOfBirth = dateOfBirth;
    _id = id;
}

std::string Author::getName() {
    return _name;
}

std::string Author::getSurname() {
    return _surname;
}

int Author::getId() {
    return _id;
}

