# C_PROJECTS
A collection of simple and practical projects built using the C programming language. Each project focuses on core programming concepts, logic building, and problem-solving. Perfect for beginners looking to practice C and strengthen their understanding through hands-on coding examples.

<span style="color:red">Project 1</span>

PROJECT: NUMBER GUESSING GAME
=============================

Description:
------------
This is a simple console-based Number Guessing Game written in C. 
The program generates a random number within a specified range, 
and the player has to guess the number. After each guess, the 
program provides hints to help the player get closer to the correct number.

Features:
---------
- Random number generation.
- User input validation.
- Hints provided for each guess (too high or too low).
- Counts the number of attempts taken to guess correctly.

How to Run:
-----------
1. Compile the C program using a compiler like GCC:
   gcc number_guessing_game.c -o game
2. Run the executable:
   ./game  (Linux/Mac)
   game.exe  (Windows)

Gameplay:
---------
- The program will prompt the player to guess a number within the range.
- Enter your guess and press Enter.
- Continue guessing until you find the correct number.
- The program will display the total number of attempts once you win.

Author:
-------
Soumyadip Giri

<span style="color:red">Project 2</span>

Simple Calculator in C
==========================================

Description:

This is a basic console-based calculator program written in C. It allows users to perform simple arithmetic operations including:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
---------------------------------------
How to Use:

1. Run the program in a C compiler or terminal.
2. Choose an operation by entering the corresponding number.
3. Enter the two numbers to perform the operation on.
4. View the result displayed on the screen.
5. Choose 'Exit' to close the calculator.
---------------------------------------------------------

Features:

- User-friendly menu interface
- Handles basic arithmetic operations
- Simple and easy to extend

 <span style="color:red">Project 3</span>

  # Digital Clock Project

## Description
This project is a simple Digital Clock implemented using C. It displays the current time in **HH:MM:SS** format and updates in real-time. This project helps in understanding time handling, loops, and basic user interface display on the console.

## Features
- Displays current **hours, minutes, and seconds**.
- Updates time every second automatically.
- Simple and easy-to-understand code, suitable for beginners.

## How to Run
1. Download the project files.
2. Compile the code (if using C):
   ```bash
   gcc digital_clock.c -o digital_clock
   ./digital_clock

<span style="color:red">Project 4</span>

# 🧑‍💻 User Management System (C Program)

## 📖 Overview
This is a simple **User Management System** built in **C language** that allows a user to **register** and **log in** using their credentials.  
The program demonstrates the use of:
- File handling (`fopen`, `fprintf`, `fgets`)
- String operations (`strcmp`, `strcspn`)
- Structured programming with functions
- Basic control flow and menu-driven interaction

---

## ⚙️ Features
✅ **User Registration**  
- Prompts for a username and password  
- Stores them securely in text files (`user_id.txt` and `pass_id.txt`)

✅ **User Login**  
- Reads stored credentials from files  
- Compares input with saved data for authentication  

✅ **Persistent Data Storage**  
- Credentials remain available even after program restarts  

✅ **Clean Menu Interface**  
- Simple and user-friendly text-based menu system  

---

## 🧩 How It Works
1. When you run the program, it greets the user and displays a main menu.  
2. Choose from the following options:
   - **1 → Register:** Create a new username and password.  
   - **2 → Login:** Enter credentials to access the system.  
   - **3 → Exit:** Quit the program.  
3. Data is stored and verified using two text files:
   - `user_id.txt` → stores username  
   - `pass_id.txt` → stores password  

---

## 🛠️ Concepts Used
- **Structures (`struct`)** for user data  
- **File I/O** for saving and reading credentials  
- **String handling** using standard C library functions  
- **Loops and conditionals** for menu navigation  

---

## 🧾 Example Run
---------------------------------
|     USER MANAGEMENT SYSTEM     |
---------------------------------

Welcome to our page

Please select an operation:
1. Register
2. Login
3. Exit
Enter your choice: 1
Enter your USER ID: raghav
Enter your Password: 1234
New user added successfully!

Enter your choice: 2
Enter your USER ID to login: raghav
Enter your Password: 1234
Login successful. Welcome raghav!

