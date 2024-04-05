// C++ Program starts here
#include <iostream>
using namespace std;

// Base class representing basic employee details
class employee {
protected:
    int age;
    string name;

public:
    // Constructor with default values
    employee(int a = 26, string n = "Durrani") : age(a), name(n) {}

    // Function to display employee details
    void display() {
        cout << "The name of the employee is " << name << endl;
        cout << "The age of the employee is " << age << endl;
    }
};

// Derived class representing faculty with additional details
class faculty : public employee {
private:
    string department;
    string designation;

public:
    // Constructor with default values, initializing base class and additional details
    faculty(int a = 40, string n = "Ahmad", string dep = "FCSE", string des = "Lecturer") : employee(a, n), department(dep), designation(des) {}

    // Overriding the display function to include additional details
    void display() {
        cout << "The name of the employee is : " << name << endl;
        cout << "The age of the employee is : " << age << endl;
        cout << "The department of the employee is : " << department << endl;
        cout << "The designation of the employee is : " << designation << endl;
    }
};

int main() {
    // Pointer of base class type
    employee *e1;

    // Creating an object of derived class faculty
    faculty f1;

    // Assigning address of faculty object to the base class pointer
    e1 = &f1;

    // Calling display function through base class pointer
    e1->display();

    return 0;
}
