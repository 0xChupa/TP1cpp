#pragma once

// create a class for the librairy with a function to add a book, an author, and a client, and a method to borrow a book and return it.

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
        std::vector<Client> _clients;
        std::vector<Borrow> _borrows;
    public:
        Librairy(std::string name, std::string address);
        void addBook(Book book);
        void addAuthor(Author author);
        void addClient(Client client);
        void borrowBook(Borrow borrow);
        void returnBook(Borrow borrow);
};