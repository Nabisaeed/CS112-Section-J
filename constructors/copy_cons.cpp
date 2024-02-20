// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class named 'employee'
class employee {
public:
    int id;
    string name;

    // Default constructor
    employee() {
        id = 2023418;
        name = "Muhammad Hamid Quyyum";
    }

    // Copy constructor
    employee(employee &obj) {
        name = obj.name;
        id = obj.id;
    }
};

int main() {
    // Creating an object of class 'employee' named 'e1'
    employee e1;

    // Creating another object of class 'employee' named 'e2' and initializing it using copy constructor with 'e1'
    employee e2(e1);

    // Printing the name and id of 'e2'
    cout << e2.name << endl;
    cout << e2.id << endl;

    return 0;
}
