#include <iostream>
using namespace std;
#include <string> // Required for using string type

// Step 1: Define the structure Books
struct Books {
    int id;
    string title;
    string author;
    double price;
};

int main() {
    // Step 2: Declare an array of Book objects
    const int numBooks = 3; // Number of books in the array
    Books library[numBooks]; // Array of Book objects

    // Step 3: Initialize elements in the array
    library[0] = {1, "c++ for beginners ", "Mr.Henock", 100.99};
    library[1] = {2, "Anthropology", "Mr.John", 98.99};
    library[2] = {3, "Atomic Habit", "James Clear", 88.49};

    // Step 4: Access and print member values of each object in the array
    for (int i = 0; i < numBooks; i++) {
        cout << "Book " << i + 1 << " Details:" << endl;
        cout << "ID: " << library[i].id << endl;
        cout << "Title: " << library[i].title << endl;
        cout << "Author: " << library[i].author << endl;
        cout << "Price: $" << library[i].price << endl;
        cout << endl;
    }

    return 0;
}


