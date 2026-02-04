📚 Library Management System (C++ | OOPS)
🚀 Project Overview
This project is a console-based Library Management System developed using C++ and Object-Oriented Programming (OOPS) principles.It simulates basic real-world library operations such as:

Adding books
Viewing books
Issuing books
Returning books
Managing members

The main objective of this project is to practice:

OOPS design
Encapsulation
Modular programming (.h / .cpp separation)
Clean architecture
Git workflow & code reviews

🛠 Tech Stack

Language: C++
Standard: C++17
Compiler: g++ (MinGW or any GCC)
IDE: VS Code / Any C++ IDE
STL: vector, string, iostream

📂 Project Structure
LibraryMngSys/
│
├── include/
│   ├── Book.h
│   ├── Member.h
│   ├── Library.h
│
├── src/
│   ├── Book.cpp
│   ├── Member.cpp
│   ├── Library.cpp
│   ├── main.cpp
│
├── data/
│   └── (reserved for future file storage)
│
└── README.md

🧠 Class Design
Book-
id
title
author
availability status
issue/return functionality

Member-
memberId
name
issued books list
book limit
issue/return tracking

Library-
manages all books and members
add/search/display operations
issue/return coordination
acts as system controller
main.cpp
console menu
user interaction
calls Library methods

⚙️ Features
Add new books
View all books
Issue books
Return books
Track availability
Member book limits
Menu-driven console interface
Modular and maintainable code

🖥 Sample Console Output
========= Library Menu ========
1. Add Book
2. Show Books
3. Issue Book
4. Return Book
5. Exit
Enter choice:

▶️ How to Run
Step 1 – Compile

From project root:
g++ src/*.cpp -Iinclude -o library

Step 2 – Run
Windows:
library.exe

Mac/Linux:
./library
