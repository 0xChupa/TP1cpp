#include <string>
#include <iostream>
#include "date.h"
class Book {
    private:
        std::string _title;
        std::string _author;
        bool _isAvailable;
        std::string _language;
        Date _dateOfPublication;
        std::string _genre;
        int _ISBN;
        //std::string _listOfBorrowers;

    public:
        Book(std::string title, std::string author, bool isAvailable, std::string language, Date dateOfPublication(int day, int month, int year), std::string genre, int ISBN);
        std::string getTitle();
        std::string getAuthor();
        bool isAvailable();
        void setAvailable(bool available);
        std::string whoBorrowed();
        void setWhoBorrowed(std::string whoBorrowed);
};

