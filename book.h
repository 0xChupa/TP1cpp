#include <string>

class Book {
    private:
        std::string _title;
        std::string _author;
        bool _isAvailable;
    public:
        Book(std::string title, std::string author, bool isAvailable);
        std::string getTitle();
        std::string getAuthor();
        bool isAvailable();
        void setAvailable(bool available);
        std::string whoBorrowed();
        void setWhoBorrowed(std::string whoBorrowed);
};

