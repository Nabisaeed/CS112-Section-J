// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class named 'vehicle'
class vehicle {
public:
    string c_name;
    int model;

    // Parameterized constructor
    vehicle(string name, int m) {
        c_name = name;
        model = m;
    }
};

int main() {
    // Creating an object of class 'vehicle' named 'c1' with parameters "Toyota " and 2023
    vehicle c1("Toyota ", 2023);

    // Printing the name and model of 'c1'
    cout << c1.c_name << endl;
    cout << c1.model << endl;

    return 0;
}
