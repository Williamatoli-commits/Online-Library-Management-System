# Online Library Management System – BSD 122 Assignment 1

Student Name: William Atoli  
Reg No:BSE-01-0252/2025
Course Code: BSD 122  
Unit: Object-Oriented Programming 1  
Language: C++



## Introduction
This project is a simple Online Library Management System built using C++.  
It allows a user to :

manage books in a library by adding new books

 - viewing all books

  - searching books

  -borrowing books 

  -returning books 

 - removing books
 
 - adding books 

The program runs in the console, and the main goal was to practice object-oriented programming concepts like classes, objects, and keeping code organized.



## Objectives
- Put into Practice object-oriented programming in C++  

- Build a simple menu-based system for managing books  

- Learn how to store and manipulate data with classes  

- Make a program that is easy to understand and use  



## How I Designed It
The system has three main classes:

1. Book – holds book details such as ID, title, author, and availability  

2. User – holds user information including ID and name  

3. Library – handles all operations such as adding, removing, searching, borrowing, and returning books  

Each class has its own responsibilities, and the library class brings everything together. The menu system lets the user choose the operation they want to perform.



## Features
- Add a new book  
- View all books  
- Search for a book by title  
- Borrow a book  
- Return a book  
- Remove a book  
- Exit the program  



## Test Cases

Positive tests:
- Borrowing a book that is available  
- Returning a borrowed book  
- Searching for a book that exists  
- Removing a book that exists  

Negative tests:
- Borrowing a book that is already borrowed  
- Returning a book that was not borrowed  
- Searching for a book that does not exist  
- Removing a book with an invalid ID  

All tests were successful and the program handled mistakes gracefully.



## Tools I Used
- C++ programming language  
- Console application (runs in SPCK Editor, Dev-C++, Cxxdroid or any terminal)  
- GitHub for storing the project  



## How to Run
1. Open library.cpp in a C++ compiler  
2. Compile the code  
3. Run the program  
4. Use the menu to add, view, search, borrow, return, or delete books  



