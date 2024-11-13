#include <iostream>
using namespace std;
#include <string> // Required for using string type

// Step 1: Define the structure Books
struct Employee {
    int id;
   string name[5];
};

int main() {
    // Step 2: Create a Book object
   Employee emp;

    // Step 3: Assign values to the structure members
    emp.id = 1;
    emp.name[5] = "Abebe";
    
    // Display the details of the book
    cout << "Book Details:" << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Title: " << emp.name[5] <<endl;
    /*cout << "Author: " << book1.author << endl;
    cout << "Price: $" << book1.price << endl;*/

    return 0;
}


















   
