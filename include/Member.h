#pragma once
#include <string>
#include <vector>

class Member {
private:
    int memberId;
    std::string name;
    std::vector<int> issuedBooks;  
    int maxBooks;

public:
    Member(int id, std::string name, int limit = 3);

    int getId() const;
    std::string getName() const;

    bool canIssue() const;
    bool hasBook(int bookId) const;

    void issueBook(int bookId);
    void returnBook(int bookId);

    void display() const;
};
