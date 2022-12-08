#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "client.h"
#include "book.h"
#include "borrow.h"
#include "author.h"

class Librairy {
    private:
        std::string _name;
        std::string _address;
        std::vector<Book> _books;
        std::vector<Author> _authors;
        std::vector<Borrow> _borrows;
    public:
        std::vector<Client> _clients;
        Librairy(std::string name, std::string address);
        void addBook(Book book);
        void addAuthor(Author author);
        void addClient(Client client);
        void borrowBook(Borrow borrow);
        std::string authorExist(Author author);
        std::string getBook(std::string ISBN);
        void wantBook();
        void returnBook();
        void displayAllBooks();
        void booksByAuthor();
        void booksBorrowedBy();
};