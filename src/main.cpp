#include <iostream>
#include "Library.h"

int main() {
    Library lib;
    int choice;

    while (true) {
        std::cout << "\n===== Library Menu =====\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Show Books\n";
        std::cout << "3. Issue Book\n";
        std::cout << "4. Return Book\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";

        std::cin >> choice;

        switch (choice) {
            case 1: lib.addBook(); break;
            case 2: lib.showBooks(); break;
            case 3: lib.issueBook(); break;
            case 4: lib.returnBook(); break;
            case 5: return 0;
            default: std::cout << "Invalid choice\n";
        }
    }
}
