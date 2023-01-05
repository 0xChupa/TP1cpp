#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "date.h"
#include "borrow.h"
#include "client.h"
#include "author.h"
#include "librairy.h"

int main() {
    Librairy MyLibrairy("Chupa's Librairy", "Everywhere");

    Author Adams = Author(1, "Douglas", "Adams", Date(11, 3, 1952));
    Author Tolkien = Author(2, "J. R. R.", "Tolkien", Date(3, 1, 1892));
    Author Rowling = Author(3, "J. K.", "Rowling", Date(31, 7, 1965));

    MyLibrairy.addAuthor(Adams);
    MyLibrairy.addAuthor(Tolkien);
    MyLibrairy.addAuthor(Rowling);

    MyLibrairy.addBook(Book("The Hitchhiker's Guide to the Galaxy", Adams, true, "English", Date(1, 10, 1979), "Science Fiction", "9780345391803"));
    MyLibrairy.addBook(Book("The Restaurant at the End of the Universe", Adams, true, "English", Date(1, 10, 1980), "Science Fiction", "9780345391810"));
    MyLibrairy.addBook(Book("Life, the Universe and Everything", Adams, true, "English", Date(1, 10, 1982), "Science Fiction", "9780345391827"));
    MyLibrairy.addBook(Book("So Long, and Thanks for All the Fish", Adams, true, "English", Date(1, 10, 1984), "Science Fiction", "9780345391834"));
    MyLibrairy.addBook(Book("Mostly Harmless", Adams, true, "English", Date(1, 10, 1992), "Science Fiction", "9780345391841"));
    MyLibrairy.addBook(Book("Harry Potter and the Philosopher's Stone", Rowling, true, "English", Date(26, 6, 1997), "Fantasy", "9780747532743"));
    MyLibrairy.addBook(Book("Harry Potter and the Chamber of Secrets", Rowling, true, "English", Date(2, 7, 1998), "Fantasy", "9780747538495"));
    MyLibrairy.addBook(Book("Harry Potter and the Prisoner of Azkaban", MyLibrairy._authors[2], true, "English", Date(8, 7, 1999), "Fantasy", "9780747546246"));
    MyLibrairy.addBook(Book("Harry Potter and the Goblet of Fire", Rowling, true, "English", Date(8, 7, 2000), "Fantasy", "9780747546246"));
    MyLibrairy.addBook(Book("Harry Potter and the Order of the Phoenix", Rowling, true, "English", Date(21, 6, 2003), "Fantasy", "9780747546246"));
    MyLibrairy.addBook(Book("Harry Potter and the Half-Blood Prince", Rowling, true, "English", Date(16, 7, 2005), "Fantasy", "9780747546246"));
    MyLibrairy.addBook(Book("Harry Potter and the Deathly Hallows", Rowling, true, "English", Date(21, 7, 2007), "Fantasy", "9780747546246"));
    MyLibrairy.addBook(Book("The Lord of the Rings", Tolkien, true, "English", Date(29, 7, 1954), "Fantasy", "9780261102381"));
    MyLibrairy.addBook(Book("The Fellowship of the Ring", Tolkien, true, "English", Date(29, 7, 1954), "Fantasy", "9780261102381"));
    MyLibrairy.addBook(Book("The Two Towers", Tolkien, true, "English", Date(11, 11, 1954), "Fantasy", "9780261102381"));

    MyLibrairy.addClient(Client("Alex", "Tavernier", "0xChupa"));
    MyLibrairy.addClient(Client("Nina", "Guerin", "Mimine24"));
    MyLibrairy.addClient(Client("Leo", "Perez", "Leoncillo2411"));
    MyLibrairy.addClient(Client("Tim", "Tavernier", "Kryptim"));
    MyLibrairy.addClient(Client("Lucas", "Chabiron", "LucasChabiron"));

std::cout << "\nWelcome to Chupa's Librairy, what do you want to do?" << std::endl;

while(true){
    std::cout << "1. Borrow a book" << std::endl;
    std::cout << "2. Return a book" << std::endl;
    std::cout << "3. Display all books" << std::endl;
    std::cout << "4. Display all books by an author" << std::endl;
    std::cout << "5. Display all books borrowed by a client" << std::endl;
    std::cout << "6. Client's leadearboard" << std::endl;
    std::cout << "7. Percentage of books borrowed" << std::endl;
    std::cout << "8. Exit" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice){
        case 1:
            MyLibrairy.wantBook();
            break;
        case 2:
            MyLibrairy.returnBook();
            break;
        case 3:
            MyLibrairy.displayAllBooks();
            break;
        case 4:
            MyLibrairy.booksByAuthor();
            break;
        case 5:
            MyLibrairy.booksBorrowedBy();
            break;
        case 6:
            MyLibrairy.clientLeaderboard();
            break;
        case 7:
            MyLibrairy.percentageOfBooksBorrowed();
            break;
        case 8:
            return 0;
            break;
        default:
            std::cout << "Please enter a valid number" << std::endl;
            break;
}

}
}

