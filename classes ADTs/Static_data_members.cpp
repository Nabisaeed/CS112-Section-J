// C++ Program starts here

#include <iostream>
using namespace std;

// Class definition
class SE {
private:
    int reg_no;
    static int count; // Declaration of static data member

public:
    // Member function to set registration number and update count
    void set(int x) {
        reg_no = x;
        count++; // Increment count for each object creation
        cout << "The number of objects created are " << count << endl;
    }

    // Static member function to display the count
    static void display() {
        cout << "The value of count is " << count << endl;
    }
};

// Definition of static data member outside the class
int SE::count = 0;

// Main function
int main() {
    // Creating objects of class SE
    SE obj, obj1;

    // Setting registration numbers and updating count
    obj.set(2023578);
    obj1.set(2023577);

    // Displaying count using class name
    SE::display();

    // Displaying count using object
    obj1.display();

    return 0;
}
