// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class named 'student'
class student {
public:
    string name;
    int reg_no;

    // Default constructor
    student() {
        cout << "This is default constructor" << endl;
    }
};

int main() {
    // Creating an object of class 'student' named 's1'
    student s1;
    
    return 0;
}
