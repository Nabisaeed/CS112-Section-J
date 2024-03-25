// C++ Program starts here

#include <iostream>
using namespace std;

// Class definition
class employee {
private:
    int age; // Private member variable to store age

public:
    // Member function to set the age
    void set(int age2) {
        this->age = age2; // Setting the age using 'this' pointer
    }

    // Member function to display the age
    void show() {
        cout << age << endl; // Displaying the age
    }
};

// Main function
int main() {
    employee e1; // Creating an object of class employee

    // Setting age and displaying it
    e1.set(27);
    e1.show();

    return 0;
}
