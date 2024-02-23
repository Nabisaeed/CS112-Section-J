// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class named student
class student {
public:
    int reg_no;     // Registration number of the student
    string name;    // Name of the student
    int DOB;        // Date of Birth of the student

    // Constructor no. 1: Initializes reg_no
    student(int a) {
        reg_no = a;
        cout << "This is constructor no. 1" << endl;
    }

    // Constructor no. 2: Initializes name
    student(int a, string name1) {
        reg_no = a;
        name = name1;
        cout << "This is constructor no. 2" << endl;
    }

    // Constructor no. 3: Initializes DOB
    student(int a, string name1, int d) {
        reg_no = a;
        name = name1;
        DOB = d;
        cout << "This is constructor no. 3" << endl;
    }
};

// Main function where the program execution starts
int main() {
    // Calling constructor no. 1
    student s1(123456);

    // Calling constructor no. 2
    student s2(789012, "Sajid");

    // Calling constructor no. 3
    student s3(345678, "Ahmad", 2002);

    return 0;
}
