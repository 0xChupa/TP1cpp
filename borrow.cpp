#include <string> 
#include <iostream>
#include "borrow.h"

Borrow::Borrow(std::string ISBN, std::string id, Date dateOfBorrow) {
    _ISBN = ISBN;
    _id = id;
    _dateOfBorrow = dateOfBorrow;
}

std::string Borrow::getISBN() {
    return _ISBN;
}

std::string Borrow::getId() {
    return _id;
}

std::string Borrow::getDateOfBorrow() {
    return _dateOfBorrow.getDate();
}

std::string Borrow::getDateOfReturn() {
    return _dateOfReturn.getDate();
}