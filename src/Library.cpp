#include "Library.h"
#include <iostream>

void Library::addBook() {
    int id;
    std::string title, author;

    std::cout << "Enter ID: ";
    std::cin >> id;
    std::cin.ignore();

    std::cout << "Enter Title: ";
    getline(std::cin, title);

    std::cout << "Enter Author: ";
    getline(std::cin, author);

    books.push_back(Book(id, title, author));

    std::cout << "Book added successfully!\n";
}

void Library::showBooks() {
    for (auto &b : books)
        b.display();
}

void Library::issueBook() {
    int id;
    std::cout << "Enter Book ID: ";
    std::cin >> id;

    for (auto &b : books) {
        if (b.getId() == id && b.isAvailable()) {
            b.issue();
            std::cout << "Book Issued!\n";
            return;
        }
    }

    std::cout << "Book not available.\n";
}

void Library::returnBook() {
    int id;
    std::cout << "Enter Book ID: ";
    std::cin >> id;

    for (auto &b : books) {
        if (b.getId() == id) {
            b.returnBook();
            std::cout << "Book Returned!\n";
            return;
        }
    }
}

//some sample code
