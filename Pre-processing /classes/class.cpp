// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class 'student' to represent a student
class student {
public: 
    string name;    // Public member variable to store the name of the student
    int reg_no;     // Public member variable to store the registration number of the student
    int dob;        // Public member variable to store the date of birth of the student
};

int main() {
    student owais;  // Creating an object 'owais' of class 'student'

    // Taking input for the name, registration number, and date of birth of the student
    cout << "Enter the name of the student :" << endl;
    cin >> owais.name;

    cout << "Enter the reg no of the student :" << endl;
    cin >> owais.reg_no;

    cout << "Enter the DOB of the student :" << endl;
    cin >> owais.dob;

    // Displaying the details of the student
    cout << "The name of the student is :" << owais.name << endl;
    cout << "The reg no of the student is :" << owais.reg_no << endl;
    cout << "The DOB of the student is :" << owais.dob << endl;

    return 0; // Indicating successful execution of the program
}
