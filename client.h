#pragma once

#include <string>
#include <vector>

class Client{
    private:
        std::string _id;
        std::string _surname;
        std::string _name;
        std::vector<std::string> _isbnList;
    public:
        Client(std::string id, std::string surname, std::string name);
        std::string getId();
        std::string setId();
        void getIsbnList();
        void addToIsbnList(std::string ISBN);
};