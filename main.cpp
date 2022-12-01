#include <iostream>
#include <string>
#include "book.h"
#include "date.h"

int main() {
    Book Book1("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", true, "English", Date(1, 10, 1979), "Science Fiction", "9780345391803");

    std::cout << Book1.getTitle() << std::endl;
    std::cout << Book1.getAuthor() << std::endl;
    std::cout << Book1.getDateOfPublication() << std::endl;

}
