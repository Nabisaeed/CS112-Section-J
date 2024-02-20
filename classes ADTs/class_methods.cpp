// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class 'employ' to represent an employee
class employee {
    private:
        string name; // Private member variable to store the name of the employee
        int age;     // Private member variable to store the age of the employee

    public:
        // Public member function to set the name of the employee
        void setname(string s1) {
            name = s1;
        }

        // Public member function to set the age of the employee
        void setage(int n) {
            age = n;
        }

        // Public member function to display the name and age of the employee
        void display() {
            cout << "The name of the employee is : " << name << endl;
            cout << "The age of the employee is : " << age << endl; 
        }
};

// Main function where the program execution begins
int main() {
    employee e1;  // Creating an object 'e1' of class 'employ'

    // Setting the name and age of the employee using member functions
    e1.setname("Abrar");
    e1.setage(26);

    // Displaying the details of the employee
    e1.display();

    return 0; // Indicating successful execution of the program
}
