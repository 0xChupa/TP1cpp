#pragma once

#include <iostream>
#include <string>
#include "date.h"

class Borrow {
    private:
        std::string _ISBN;
        std::string _id;
        Date _dateOfBorrow;
        Date _dateOfReturn;
    public:
        Borrow(std::string ISBN, std::string id, Date dateOfBorrow, Date dateOfReturn);
        std::string getISBN();
        std::string getId();
        std::string getDateOfBorrow();
        std::string getDateOfReturn();
};