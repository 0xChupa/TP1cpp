#include <iostream>
#include <string>
#include <vector>
#include "client.h"

Client::Client(std::string id, std::string surname, std::string name) {
    _id = id;
    _surname = surname;
    _name = name;
}

std::string Client::getId() {
    return _id;
}

std::string Client::setId() {
    return _id;
}

void Client::getIsbnList() {
    for (int i = 0; i < _isbnList.size(); i++) {
        std::cout << _isbnList[i] << std::endl;
    }
}

void Client::addToIsbnList(std::string ISBN) {
    _isbnList.push_back(ISBN);
}