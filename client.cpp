#include <iostream>
#include <string>
#include <vector>
#include "client.h"

Client::Client(std::string name, std::string surname, std::string id) {
    _surname = surname;
    _name = name;
    _id = id;
}

std::string Client::getId() {
    return _id;
}

std::string Client::setId() {
    return _id;
}

std::vector<std::string> Client::getIsbnList() {
    return _isbnList;
    }

void Client::addToIsbnList(std::string ISBN) {
    _isbnList.push_back(ISBN);
}

std::ostream& operator<<(std::ostream& os, const Client& c) {
    os << "Name: " << c._name << std::endl;
    os << "Surname: " << c._surname << std::endl;
    os << "ID: " << c._id << std::endl;
    os << "ISBNs: " << std::endl;
    for (const auto& isbn : c._isbnList) {
        os << isbn << std::endl;
    }
    return os;
}

std::string Client::getName() {
    return _name;
}

std::string Client::getSurname() {
    return _surname;
}
