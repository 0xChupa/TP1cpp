#include <iostream>
#include <string>
#include "book.h"
#include "date.h"
#include "borrow.h"
#include "client.h"

int main() {
    Book Book1("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", true, "English", Date(1, 10, 1979), "Science Fiction", "9780345391803");

    Client Client1("Alex", "Tavernier", "0xChupa");

    std::cout << "Welcome to the library!" << std::endl;
    std::cout << "Here is the available list of books:" << std::endl;
    std::cout << "Title: " << Book1.getTitle() << "by" << Book1.getAuthor() << std::endl;

    std::cout << "Would you like to borrow this book?" << std::endl;
    std::string answer;
    std::cin >> answer;

    if (answer == "yes") {
        Borrow Borrow1(Book1.getISBN(), Client1.getId(), Date(1, 12, 2022), Date(1, 01, 2022));
        std::cout << "You have borrowed the book " << Book1.getTitle() << " by " << Book1.getAuthor() << std::endl;
        std::cout << "You have to return it before " << Borrow1.getDateOfReturn() << std::endl;
    }
    else {
        std::cout << "Have a nice day!" << std::endl;
    }

}
