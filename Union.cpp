// C++ Program starts here

#include <iostream>
using namespace std;

// Union to represent a book with either pages or price
union book {
    int pages;
    float price;
};

int main() {
    // Initializing a variable of type 'book'
    book b1;

    // Assigning values to the union members
    b1.pages = 364;
    b1.price = 70.2020153456;

    // Displaying the values stored in the union members
    cout << "Number of pages: " << b1.pages << endl;
    cout << "Price: " << b1.price << endl;

    // Return 0 to indicate successful execution
    return 0;
}
