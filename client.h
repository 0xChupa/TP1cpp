#pragma once

#include <string>
#include <vector>

class Client{
    private:
        std::string _name;
        std::string _surname;
        std::string _id;
        std::vector<std::string> _isbnList;
    public:
        Client(std::string id, std::string surname, std::string name);
        std::string getName();
        std::string getSurname();
        std::string getId();
        std::string setId();
        std::vector<std::string> getIsbnList();
        void addToIsbnList(std::string ISBN);
        friend std::ostream& operator<<(std::ostream& os, const Client& c);
};