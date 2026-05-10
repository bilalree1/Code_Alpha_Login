# Login & Registration System in C++

A simple console-based Login and Registration System built using C++ and file handling.

## 📌 Features

- User Registration
- User Login Authentication
- Duplicate Username Detection
- File-based Data Storage
- Simple Console Interface

---

## 🛠 Technologies Used

- C++
- File Handling (`fstream`)
- Standard Input/Output

---

## 📂 Project Structure

├── main.cpp
├── users.txt
└── README.md

- `main.cpp` → Contains the source code
- `users.txt` → Stores usernames and passwords
- `README.md` → Project documentation

---

## 🚀 How It Works

### 1. Registration
- User enters a username and password
- Program checks whether the username already exists
- If unique, credentials are stored in `users.txt`

### 2. Login
- User enters username and password
- Program reads data from `users.txt`
- If credentials match, login is successful

---

## 💻 Sample Output

```bash
===== LOGIN & REGISTRATION SYSTEM =====
1. Register
2. Login
3. Exit
Enter Choice: 1

Enter Username: admin
Enter Password: 1234
Registration Successful!# Code_Alpha_Login
This project is a simple Login and Registration System developed in C++ using file handling. It allows users to create an account and log in using stored credentials. User data is saved in a text file (users.txt) so that registered accounts remain available even after the program is closed. 
