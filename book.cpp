#include <iostream>
#include <string>
#include "book.h"

Book::Book(std::string title, std::string author, bool isAvailable) {
    _title = title;
    _author = author;
    _isAvailable = true;
}

std::string Book::getTitle() {
    return _title;
}

std::string Book::getAuthor() {
    return _author;
}

bool Book::isAvailable() {
    return _isAvailable;
}

void Book::setAvailable(bool available) {
    _isAvailable = available;
}