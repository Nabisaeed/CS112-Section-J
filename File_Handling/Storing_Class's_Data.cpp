// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

// Define a class named employee
class employee {
public:
    int age;
    string name;
    float salary;

    // Constructor to initialize employee attributes
    employee(int a, string n, float s) : age(a), name(n), salary(s) {}
};

int main() {
    // Declare variables to store employee information
    int age;
    string name;
    float salary;

    // Create an instance of the employee class
    employee aazeb(23, "Ijaz", 150.50);

    // Open a file named "Document1.txt" for writing
    ofstream file("Document1.txt");

    // Check if the file is successfully opened
    if (file.is_open()) {
        // Write employee information to the file
        file << "The name of employee is: " << aazeb.name << endl;
        file << "The age of employee is: " << aazeb.age << endl;
        file << "The salary of employee is: " << aazeb.salary << endl;
    }

    return 0;
}
