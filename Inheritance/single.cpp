// C++ Program starts here
#include <iostream>
using namespace std;

// Base class animal
class animal {
public:
    // Method to display that the animal can eat
    void eat() {
        cout << "The animal can eat" << endl;
    }
};

// Derived class dog inheriting from class animal
class dog : public animal {
public:
    // Method to display that the dog is barking
    void bark() {
        cout << "The dog is barking " << endl;
    }
};

int main() {
    // Creating an object of class dog
    dog d1;

    // Calling eat() method of class animal using d1
    d1.eat();

    // Calling bark() method of class dog using d1
    d1.bark();
    
    return 0;
}
