#pragma once
#include <string>

class Book {
private:
    int id;
    std::string title;
    std::string author;
    bool available;

public:
    Book(int id, std::string title, std::string author);

    int getId();
    std::string getTitle();
    bool isAvailable();

    void issue();
    void returnBook();

    void display();
    void return();
};