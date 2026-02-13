# 📚 Library Management System (C++ | OOPS)

## 🚀 Project Overview
This project is a **console-based Library Management System** developed using **C++** and **Object-Oriented Programming (OOPS)** principles.  
It simulates basic real-world library operations such as:

- Adding books  
- Viewing books  
- Issuing books  
- Returning books  
- Managing members  

### 🎯 Objective
The main objective of this project is to practice:

- OOPS design  
- Encapsulation  
- Modular programming (`.h / .cpp` separation)  
- Clean architecture  
- Git workflow & code reviews  

---

## 🛠 Tech Stack

| Component | Technology |
|----------|------------|
| Language | C++ |
| Standard | C++17 |
| Compiler | g++ (MinGW or GCC) |
| IDE | VS Code / Any C++ IDE |
| STL Used | vector, string, iostream |

---

## 📂 Project Structure
```
LibraryMngSys/
│
├── include/
│ ├── Book.h
│ ├── Member.h
│ ├── Library.h
│
├── src/
│ ├── Book.cpp
│ ├── Member.cpp
│ ├── Library.cpp
│ ├── main.cpp
│
├── data/
│ └── (reserved for future file storage)
│
└── README.md
```

---

## 🧠 Class Design

### 📘 Book Class
Represents a book in the library.

**Attributes:**
- `id`
- `title`
- `author`
- `availability status`

**Responsibilities:**
- Issue book  
- Return book  
- Display book info  

---

### 👤 Member Class
Represents a library member.

**Attributes:**
- `memberId`
- `name`
- `issued books list`
- `book limit`

**Responsibilities:**
- Track issued books  
- Enforce book limits  
- Issue and return tracking  

---

### 🏛 Library Class
Acts as the system controller.

**Responsibilities:**
- Manage all books and members  
- Add/search/display books  
- Issue and return coordination  
- Central system logic  

---

### 🖥 main.cpp
Handles:

- Console menu  
- User interaction  
- Calls Library class methods  

---

## ⚙️ Features

- ✅ Add new books  
- ✅ View all books  
- ✅ Issue books  
- ✅ Return books  
- ✅ Track availability  
- ✅ Member book limits  
- ✅ Menu-driven console interface  
- ✅ Modular and maintainable code  

---

## 🖥 Sample Console Output

========= Library Menu ========

Add Book
Show Books
Issue Book
Return Book
Exit

Enter choice:


---

## ▶️ How to Run

### Step 1 – Compile

From project root directory:

```bash
g++ src/*.cpp -Iinclude -o library
Step 2 – Run
Windows:
library.exe

Mac/Linux:
./library

📌 Future Improvements
File handling for persistent storage
Search functionality
Fine calculation
Admin & user roles
GUI version
