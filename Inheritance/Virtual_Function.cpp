// C++ Program starts here
#include <iostream>
using namespace std;

class parent {
    public:
        // Virtual function to display a message indicating it's the parent class
        virtual void display() {
            cout << "This is parent class" << endl;
        }
};

class child : public parent {
    public:
        // Overridden function to display a message indicating it's the child class
        void display() override {
            cout << "This is child class" << endl;
        }
};

int main() {
    // Declaring a pointer to parent class
    parent *p1;

    child c1;

    // Assigning the address of child object to the parent pointer
    p1 = &c1;

    // Calling the display function through parent pointer, which will call child's display function due to dynamic binding
    p1->display();

    return 0;
}
