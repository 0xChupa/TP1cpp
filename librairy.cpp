#include <iostream>
#include <string>
#include <vector>

#include "librairy.h"

Librairy::Librairy(std::string name, std::string address)
{
    _name = name;
    _address = address;
}

void Librairy::addBook(Book book)
{
    _books.push_back(book);
}

void Librairy::addAuthor(Author author)
{
    _authors.push_back(author);
}

void Librairy::addClient(Client client)
{
    _clients.push_back(client);
}

void Librairy::borrowBook(Borrow borrow)
{
    _borrows.push_back(borrow);
}

std::string Librairy::authorExist(Author author)
{
    for (int i = 0; i < _authors.size(); i++)
    {
        if (_authors[i].getName() == author.getName())
        {
            return "We have books from this author";
        }
    }
    return "Author not found";
}

std::string Librairy::getBook(std::string ISBN)
{
    for (int i = 0; i < _books.size(); i++)
    {
        if (_books[i].getISBN() == ISBN)
        {
            return "Book found";
        }
    }
    return "Book not found";
}

void Librairy::wantBook()
{
    std::cout << "Which book are you looking for? Please input the book's ISBN." << std::endl;
    std::string bookISBN;
    std::cin >> bookISBN;
    std::cout << "Let us check if we have it..." << std::endl;
    for (int i = 0; i < _books.size(); i++)
    {
        if (_books[i].getISBN() == bookISBN && _books[i].isAvailable() == true)
        {
            std::cout << "The book is available." << std::endl;
            std::cout << "Do you already have an account? (Y/N)" << std::endl;
            std::string answer;
            std::cin >> answer;
            if (answer == "N")
            {
                std::cout << "Alright, let's create an account then. Please write you name, surname, and ID?" << std::endl;
                std::string name, surname, ID;
                std::cin >> name >> surname >> ID;
                Client newClient(ID, surname, name);
                addClient(newClient);
                std::cout << "Your account has been created." << std::endl;
            }
            std::cout << "Alright, so what's your ID?" << std::endl;
            std::string clientID;
            std::cin >> clientID;
            Borrow borrow(bookISBN, clientID, Date());
            borrowBook(borrow);
            for (int i = 0; i < _clients.size(); i++)
            {
                if (_clients[i].getId() == clientID)
                {
                    _clients[i].addToIsbnList(bookISBN);
                }
            }
            std::cout << "You have borrowed the book. Please return it in a week!" << std::endl;
            for (int i = 0; i < _books.size(); i++)
            {
                if (_books[i].getISBN() == bookISBN)
                {
                    _books[i].setAvailable(false);
                }
            }
            break;
        }
        else if (_books[i].getISBN() == bookISBN && _books[i].isAvailable() == false)
        {
            std::cout << "The book is not available." << std::endl;
            break;
        }
    }
}

void Librairy::returnBook()
{
    std::cout << "Which book do you want to return? Please input the book's ISBN." << std::endl;
    std::string ISBN;
    std::cin >> ISBN;
    std::cout << "What's your ID?" << std::endl;
    std::string ID;
    std::cin >> ID;
    std::cout << "Let us check if you have borrowed this book..." << std::endl;
    for (int i = 0; i < _borrows.size(); i++)
    {
        if (_borrows[i].getISBN() == ISBN && _borrows[i].getId() == ID)
        {
            std::cout << "You have borrowed this book. Do you want to return it? (Y/N)" << std::endl;
            std::string answer;
            std::cin >> answer;
            if (answer == "Y")
            {
                std::cout << "You have returned the book. Thank you!" << std::endl;
                for (int i = 0; i < _books.size(); i++)
                {
                    if (_books[i].getISBN() == ISBN)
                    {
                        _books[i].setAvailable(true);
                    }
                }
            }
        }
        else if (_borrows[i].getISBN() == ISBN && _borrows[i].getId() != ID)
        {
            std::cout << "You have not borrowed this book." << std::endl;
        }
    }
}

void Librairy::displayAllBooks()
{
    for (int i = 0; i < _books.size(); i++)
    {
        std::cout << i << " - " << _books[i].getTitle() << std::endl;
    }
}

void Librairy::booksByAuthor()
{
    std::cout << "Here is the list of all the authors: " << std::endl;
    for (int i = 0; i < _authors.size(); i++)
    {
        std::cout << i << " - " << _authors[i].getName() << std::endl;
    }
    std::cout << "Which author are you looking for? Please input the ID of the author." << std::endl;
    int id;
    std::cin >> id;
    for (int i = 0; i < _authors.size(); i++)
    {
        if (i == id)
        {
            std::cout << "Here is the list of all the books from this author: " << std::endl;
            for (int j = 0; j < _books.size(); j++)
            {
                if (_books[j].getAuthor() == _authors[i].getName())
                {
                    std::cout << j << " - " << _books[j].getTitle() << std::endl;
                }
            }
        }
    }
}

void Librairy::booksBorrowedBy()
{
    std::cout << "Which client are you looking for? Please input the client's ID." << std::endl;
    std::string ID;
    std::cin >> ID;
    for (int i = 0; i < _clients.size(); i++)
    {
        if (_clients[i].getId() == ID)
        {
            std::cout << "You have borrowed the following books: " << std::endl;
            _clients[i].getIsbnList();
            break;
        }
        else
        {
            std::cout << "Client not found." << std::endl;
        }
    }
}