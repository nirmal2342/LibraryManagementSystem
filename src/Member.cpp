#include "Member.h"
#include <iostream>
#include <algorithm>

Member::Member(int id, std::string name, int limit)
    : memberId(id), name(name), maxBooks(limit) {}


int Member::getId() const {
    return memberId;
}

std::string Member::getName() const {
    return name;
}

bool Member::canIssue() const {
    return issuedBooks.size() < maxBooks;
}

bool Member::hasBook(int bookId) const {
    return std::find(issuedBooks.begin(), issuedBooks.end(), bookId) != issuedBooks.end();
}

void Member::issueBook(int bookId) {
    if (canIssue()) {
        issuedBooks.push_back(bookId);
        std::cout << "Book issued successfully to " << name << "\n";
    } else {
        std::cout << "Issue limit reached!\n";
    }
}

void Member::returnBook(int bookId) {
    auto it = std::find(issuedBooks.begin(), issuedBooks.end(), bookId);

    if (it != issuedBooks.end()) {
        issuedBooks.erase(it);
        std::cout << "Book returned successfully\n";
    } else {
        std::cout << "This member doesn't have that book\n";
    }
}


void Member::display() const {
    std::cout << "\nMember ID: " << memberId
              << "\nName: " << name
              << "\nIssued Books: ";

    if (issuedBooks.empty()) {
        std::cout << "None";
    } else {
        for (int id : issuedBooks)
            std::cout << id << " ";
    }

    std::cout << "\n";
}
