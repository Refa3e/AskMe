## AskMe Logo

![AskMe](assets/logo.png)

<p align="center">
  <img src="logo.png" alt="AskMe Logo" width="200"/>
</p>

# AskMe

A simple console-based AskMe system built using C++ and Object-Oriented Programming (OOP).  
It allows users to register, log in, ask/answer questions (anonymously or not), delete questions, and save/load data using files.

---

## 💻 Features

- 👤 User registration and login system
- ❓ Ask questions (anonymously or normally)
- 💬 Answer questions
- 🧾 View your questions and answers
- 🗑️ Delete questions by ID
- 💾 Save and load data using file system (`fstream`)
- 📦 Object-Oriented design with encapsulation and classes

---

## 📁 Files Structure

- `main.cpp` — Entry point  
- `User.h / User.cpp` — Handles user-related operations  
- `Login.h / Login.cpp` — Manages user login, questions, and answers  
- `Questions.txt` — Stores all questions and answers  
- `Users.txt` — Stores all registered users

---

## 🚀 How to Run

Make sure you have a C++ compiler (like g++):

```bash
g++ main.cpp -o AskMe
./AskMe
