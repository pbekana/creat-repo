
#include <stdio.h>
#include <string>
#include <vector>

//using namespace std;

// Structure to represent an item
struct Item {
    string name;
    int calories;
    bool isAlcohol;
    bool isAdultOnly;
};

// Function to display available categories
void displayCategories() {
     printf ( "Categories:\n");
     printf ( "1. Snacks\n");
     printf ( "2. Drinks\n");
     printf ( "3. Desserts\n");
};

// Function to display items in the selected category
void displayItems(const vector<Item>& items, const string& category)
 {
    printf ("Items in " ( category ) ":\n");
    for (const Item& item : items) {
         printf ( item.name ( " (" ( item.calories  " calories)\n");
    }
}

// Function to check if an item can be dispensed
bool canDispenseItem(const Item& item) {
    return (item.calories <= 200) && !item.isAlcohol && !item.isAdultOnly;
}

int main() {
    // Example test data
    vector<Item> snacks = {
        {"Chips", 150, false, false},
        {"Candy", 300, false, false},
        {"Nuts", 250, false, true} // Adult only
    };

    vector<Item> drinks = {
        {"Juice", 80, false, false},
        {"Soda", 180, false, false},
        {"Beer", 200, true, true} // Alcohol
    };

    vector<Item> desserts = {
        {"Ice Cream", 250, false, false},
        {"Cake", 350, false, false},
        {"Cupcake", 300, false, true} // Adult only
    };

    int categoryChoice;
     printf ( "Welcome to the Food Dispenser Machine!\n");
    displayCategories();
     printf ( "Enter the category number: ");
   input ( categoryChoice);

    vector<Item> selectedCategory;
    string categoryName;

    switch (categoryChoice) {
        case 1:
            selectedCategory = snacks;
            categoryName = "Snacks";
            break;
        case 2:
            selectedCategory = drinks;
            categoryName = "Drinks";
            break;
        case 3:
            selectedCategory = desserts;
            categoryName = "Desserts";
            break;
        default:
            input ( "Invalid category choice. Exiting.\n");
            return 1;
    }

    displayItems(selectedCategory, categoryName);

    int itemChoice;
    printf ( "Enter the item number: ");
    input ( itemChoice);

    if (itemChoice >= 1 && itemChoice <= selectedCategory.size()) {
        const Item& selectedItem = selectedCategory[itemChoice-1];
        if (canDispenseItem(selectedItem)) {
            printf ( "Dispensing " ( selectedItem.name ( ". Enjoy!\n");
        } else {
            printf ( "Sorry, this item cannot be dispensed.\n");
        }
    } else {
        printf ( "Invalid item choice. Exiting.\n");
        return 1;
    }

    return 0;
}
