#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 100;

// Book details stored in arrays
int bookID[MAX_BOOKS];
string bookTitle[MAX_BOOKS];
string bookAuthor[MAX_BOOKS];
bool bookAvailable[MAX_BOOKS];
int totalBooks = 0;

// Function to add a book
void addBook() {
    if (totalBooks >= MAX_BOOKS) {
        cout << "Library is full. Cannot add more books.\n";
        return;
    }

    cout << "Enter Book ID: ";
    cin >> bookID[totalBooks];
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, bookTitle[totalBooks]);

    cout << "Enter Book Author: ";
    getline(cin, bookAuthor[totalBooks]);

    bookAvailable[totalBooks] = true;
    totalBooks++;

    cout << "Book added successfully.\n";
}

// Function to view all books
void viewBooks() {
    if (totalBooks == 0) {
        cout << "No books in the library.\n";
        return;
    }

    cout << "\nBooks in Library:\n";
    for (int i = 0; i < totalBooks; i++) {
        cout << "ID: " << bookID[i]
             << " | Title: " << bookTitle[i]
             << " | Author: " << bookAuthor[i]
             << " | Status: " << (bookAvailable[i] ? "Available" : "Borrowed")
             << endl;
    }
}

// Function to search for a book by ID
void searchBook() {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) {
        if (bookID[i] == id) {
            cout << "Book Found:\n";
            cout << "Title: " << bookTitle[i] << endl;
            cout << "Author: " << bookAuthor[i] << endl;
            cout << "Status: " << (bookAvailable[i] ? "Available" : "Borrowed") << endl;
            return;
        }
    }
    cout << "Book not found.\n";
}

// Function to borrow a book
void borrowBook() {
    int id;
    cout << "Enter Book ID to borrow: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) {
        if (bookID[i] == id) {
            if (bookAvailable[i]) {
                bookAvailable[i] = false;
                cout << "Book borrowed successfully.\n";
            } else {
                cout << "Book is already borrowed.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

// Function to return a book
void returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) {
        if (bookID[i] == id) {
            if (!bookAvailable[i]) {
                bookAvailable[i] = true;
                cout << "Book returned successfully.\n";
            } else {
                cout << "Book was not borrowed.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

// Function to delete a book
void deleteBook() {
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) {
        if (bookID[i] == id) {
            // Shift all books after this one
            for (int j = i; j < totalBooks - 1; j++) {
                bookID[j] = bookID[j + 1];
                bookTitle[j] = bookTitle[j + 1];
                bookAuthor[j] = bookAuthor[j + 1];
                bookAvailable[j] = bookAvailable[j + 1];
            }
            totalBooks--;
            cout << "Book deleted successfully.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

// Main program
int main() {
    int choice;

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Search Book\n";
        cout << "4. Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "6. Delete Book\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: borrowBook(); break;
            case 5: returnBook(); break;
            case 6: deleteBook(); break;
            case 7: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}
