#pragma once

#include <string>
#include <iostream>
#include "date.h"
#include "author.h"

class Book {
    private:
        std::string _title;
        Author _author;
        bool _isAvailable;
        std::string _language;
        Date _dateOfPublication;
        std::string _genre;
        std::string _ISBN;

    public:
        Book(std::string title, Author author, bool isAvailable, std::string language, Date dateOfPublication, std::string genre, std::string ISBN);
        std::string getISBN();
        std::string getTitle();
        std::string getAuthor();
        bool isAvailable();
        void setAvailable(bool available);
        std::string getDateOfPublication();
        friend std::ostream& operator<<(std::ostream& os, const Book& b);
};

