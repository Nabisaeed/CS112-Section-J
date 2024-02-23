// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class named user
class user {
public:
    int reg_no;     // Registration number of the user
    string name;    // Name of the user
    int DOB;        // Date of Birth of the user
};

// Defining a class named admin
class admin {
public:
    // Function to add users
    user* add_user(int size) {
        user* p = new user[size];  // Dynamically allocate memory for an array of users
        for(int i = 0; i < size; i++) {
            cout << "Enter the name of user " << i + 1 << ": ";
            cin >> p[i].name;
            cout << "Enter the reg_no of user " << i + 1 << ": ";
            cin >> p[i].reg_no;
            cout << "Enter the DOB of user " << i + 1 << ": ";
            cin >> p[i].DOB;
        }
        return p;
    }

    // Function to display user details
    void display(int size, user* p) {
        for(int i = 0; i < size; i++) {
            cout << "The name of user " << i + 1 << " is : " << p[i].name << endl;
            cout << "The reg_no of user " << i + 1 << " is : " << p[i].reg_no << endl;
            cout << "The DOB of user " << i + 1 << " is : " << p[i].DOB << endl;
        }
    }
};

// Main function where the program execution starts
int main() {
    int s;
    cout << "Enter the number of users: ";
    cin >> s;

    admin a1;
    user* p = a1.add_user(s); // Add users and store the pointer to the array

    a1.display(s, p); // Display user details

    delete[] p; // Free dynamically allocated memory

    // Note: Trying to display user details after deallocating memory will lead to undefined behavior
    // a1.display(s, p);

    return 0;
}
