#include <iostream>
#include <string>
#include "book.h"

Book::Book(std::string title, std::string author, bool isAvailable, std::string language, Date _dateOfPublication(int day,int month,int year), std::string genre, int ISBN) {
    _title = title;
    _author = author;
    _isAvailable = isAvailable;
    _language = language;
    _dateOfPublication = _dateOfPublication;
    _genre = genre;
    _ISBN = ISBN;
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