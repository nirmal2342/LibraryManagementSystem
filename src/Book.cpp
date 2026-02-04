#include "Book.h"
#include <iostream>

Book::Book(int id, std::string title, std::string author)
    : id(id), title(title), author(author), available(true) {}

int Book::getId() { return id; }

std::string Book::getTitle() { return title; }

bool Book::isAvailable() { return available; }

void Book::issue() { available = false; }

void Book::returnBook() { available = true; }

void Book::display() {
    std::cout << id << " | " << title << " | "
              << author << " | "
              << (available ? "Available" : "Issued") << "\n";
}
