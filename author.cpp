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

Date Author::getDateOfBirth() {
    return _dateOfBirth;
}

std::ostream& operator<<(std::ostream& os, const Author& a) {
    os << "ID: " << a._id << std::endl;
    os << "Name: " << a._name << std::endl;
    os << "Surname: " << a._surname << std::endl;
    return os;
}