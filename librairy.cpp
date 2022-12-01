#include <iostream>
#include <string>
#include <vector>
#include "librairy.h"


Librairy::Librairy(std::string name, std::string address) {
    _name = name;
    _address = address;
}

void Librairy::addBook(Book book) {
    _books.push_back(book);
}

void Librairy::addAuthor(Author author) {
    _authors.push_back(author);
}

void Librairy::addClient(Client client) {
    _clients.push_back(client);
}

void Librairy::borrowBook(Borrow borrow) {
    _borrows.push_back(borrow);
}

void Librairy::returnBook(Borrow borrow) {
    for (int i = 0; i < _borrows.size(); i++) {
        if (_borrows[i].getISBN() == borrow.getISBN()) {
            _borrows.erase(_borrows.begin() + i);
        }
    }
}

