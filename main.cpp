#include <iostream>
#include <string>
#include "book.h"
#include "date.h"
#include "borrow.h"
#include "client.h"
#include "author.h"
#include "librairy.h"

int main() {
    Book Book1("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", true, "English", Date(1, 10, 1979), "Science Fiction", "9780345391803");
    Book Book2("The Restaurant at the End of the Universe", "Douglas Adams", true, "English", Date(1, 10, 1980), "Science Fiction", "9780345391810");
    Book Book3("Life, the Universe and Everything", "Douglas Adams", true, "English", Date(1, 10, 1982), "Science Fiction", "9780345391827");
    Book Book4("So Long, and Thanks for All the Fish", "Douglas Adams", true, "English", Date(1, 10, 1984), "Science Fiction", "9780345391834");
    Book Book5("Mostly Harmless", "Douglas Adams", true, "English", Date(1, 10, 1992), "Science Fiction", "9780345391841");
    Book Book6("Harry Potter and the Philosopher's Stone", "J.K. Rowling", true, "English", Date(26, 6, 1997), "Fantasy", "9780747532743");
    Book Book7("Harry Potter and the Chamber of Secrets", "J.K. Rowling", true, "English", Date(2, 7, 1998), "Fantasy", "9780747538495");
    Book Book8("Harry Potter and the Prisoner of Azkaban", "J.K. Rowling", true, "English", Date(8, 7, 1999), "Fantasy", "9780747546246");
    Book Book9("Harry Potter and the Goblet of Fire", "J.K. Rowling", true, "English", Date(8, 7, 2000), "Fantasy", "9780747546246");
    Book Book10("Harry Potter and the Order of the Phoenix", "J.K. Rowling", true, "English", Date(21, 6, 2003), "Fantasy", "9780747546246");
    Book Book11("Harry Potter and the Half-Blood Prince", "J.K. Rowling", true, "English", Date(16, 7, 2005), "Fantasy", "9780747546246");
    Book Book12("Harry Potter and the Deathly Hallows", "J.K. Rowling", true, "English", Date(21, 7, 2007), "Fantasy", "9780747546246");
    Book Book13("The Lord of the Rings", "J.R.R. Tolkien", true, "English", Date(29, 7, 1954), "Fantasy", "9780261102381");
    Book Book14("The Fellowship of the Ring", "J.R.R. Tolkien", true, "English", Date(29, 7, 1954), "Fantasy", "9780261102381");
    Book Book15("The Two Towers", "J.R.R. Tolkien", true, "English", Date(11, 11, 1954), "Fantasy", "9780261102381");

    Client Client1("Alex", "Tavernier", "0xChupa");
    Client Client2("Nina", "Guerin", "Mimine24");
    Client Client1("Leo", "Perez", "Leoncillo2411");

    Librairy MyLibrairy("Chupa's Librairy", "Nowhere");

    for (int i = 0; i < 15; i++) {
        MyLibrairy.addBook(Book[i]);
    }
    for (int i = 0; i < 3; i++) {
        MyLibrairy.addClient(Client[i]);
    }

std::cout << "Welcome to Chupa's Librairy, what do you want to do?" << std::endl;

}
