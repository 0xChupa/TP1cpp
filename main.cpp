#include <iostream>
#include <string>
#include "book.h"

int main() {
    Book book("Harry Potter", "J.K. Rowling", true);
    std::cout << "Our only book is " << book.getTitle() << " by " << book.getAuthor() << std::endl;
}