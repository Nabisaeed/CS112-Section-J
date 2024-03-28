#include <iostream>
using namespace std;

class Int {
private:
    int x; // Private member variable to store integer value

public:
    // Constructor to initialize the integer value, default value is 0
    Int(int p1 = 0) : x(p1) {}

    // Method to display the integer value
    void display() {
        cout << x << endl;
    }

    // Method to add two Int objects and return the result as a new Int object
    Int add(Int obj1) {
        Int obj2(x + obj1.x); // Create a new Int object with the sum of x values of current object and obj1
        return obj2; // Return the new Int object
    }
};

int main() {
    // Create three Int objects i1, i2, and i3 with initial values 100, 200, and 0 respectively
    Int i1(100), i2(200), i3;

    // Call the add method on i1 passing i2 as an argument, assign the result to i3
    i3 = i1.add(i2);

    // Display the value of i3
    i3.display();

    return 0; // Indicates successful completion of the program
}
