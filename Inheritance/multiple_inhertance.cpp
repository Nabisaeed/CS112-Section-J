// C++ Program starts here
#include <iostream>
using namespace std;

// Base class A
class A {
public:
    // Method to display information about class A
    void displayA() {
        cout << "This is class A " << endl;
    }
};

// Base class B
class B {
public:
    // Method to display information about class B
    void displayB() {
        cout << "This is class B " << endl;
    }
};

// Derived class C inheriting from classes A and B
class C : public A, public B {
public:
    // Method to display information about class C
    void displayC() {
        cout << "This is class C " << endl;
    }
};

int main() {
    // Creating an object of class C
    C obj1;
    
    // Calling displayA() method of class A using obj1
    obj1.displayA();
    
    // Calling displayB() method of class B using obj1
    obj1.displayB();
    
    return 0;
}
