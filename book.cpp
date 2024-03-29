#include <iostream>
#include <string>
#include "book.h"
#include "author.h"

Book::Book(std::string title, Author author, bool isAvailable, std::string language, Date dateOfPublication, std::string genre, std::string ISBN) {
    _title = title;
    _author = author;
    _isAvailable = isAvailable;
    _language = language;
    _dateOfPublication = dateOfPublication;
    _genre = genre;
    _ISBN = ISBN;
}

std::string Book::getISBN() {
    return _ISBN;
}

std::string Book::getTitle() {
    return _title;
}

std::string Book::getAuthor() {
    return _author.getName();
}

bool Book::isAvailable() {
    return _isAvailable;
}

void Book::setAvailable(bool available) {
    _isAvailable = available;
}

std::string Book::getDateOfPublication() {
    return _dateOfPublication.getDate();
}

std::ostream& operator<<(std::ostream& os, const Book& b) {
    os << "Title: " << b._title << std::endl;
    os << "ISBN: " << b._ISBN << std::endl;
    os << "Language: " << b._language << std::endl;
    os << "Genre: " << b._genre << std::endl;
    return os;
}