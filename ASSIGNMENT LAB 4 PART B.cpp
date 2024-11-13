#include <iostream>
using namespace std;

// Step 1: Define an enumeration named listCotFYrSPS
enum listCotFYrSPS {
    CP,
    Maths,
    Anthropology,
    Emerging,
    English,
};

int main() {
    // Step 2: Declare an array named marks to store the marks for 5 subjects
    double marks[5];

    // Step 3: Prompt the user to enter the marks for each subject
    cout << "Enter the marks for the following subjects:" << endl;
    cout << "C++: ";
    cin >> marks[CP];    /* enter c++=5, maths=6, Anthropology=7, 
                                            Emerging=8, English=9 */
    cout << "Maths: ";
    cin >> marks[Maths];
    cout << "Anthropology: ";
    cin >> marks[Anthropology];
    cout <<"Emerging: ";
    cin >> marks[Emerging];
    cout << "English: ";
    cin >> marks[English];

    // Step 4: Access and print the marks for each subject using enum elements
    cout << "Marks for C++: " << marks[CP] << endl;
    cout << "Marks for Maths: " << marks[Maths] << endl;
    cout << "Marks for Anthropology: " << marks[Anthropology] << endl;
    cout << "Marks for Emerging: " << marks[Emerging] << endl;
    cout << "Marks for English: " << marks[English] << endl;

    return 0;
}



