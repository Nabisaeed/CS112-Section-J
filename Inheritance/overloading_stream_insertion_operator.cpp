// C++ Program starts here
#include <iostream>
using namespace std;

class employee {
    public:
        // Public member variables
        int age;
        string name;

    public:
        // Constructor with default values
        employee(int a = 0, string n = "sajid"): age(a), name(n) {}

        // Overloading the insertion operator '<<' as a friend function
        friend ostream & operator << (ostream & print, employee e2) {
            print << "The name of the employee is: " << e2.name << endl;
            print << "The age of the employee is: " << e2.age << endl;
            return print;
        }
};

int main() {
    // Creating an employee object e1
    employee e1;

    // Printing the details of e1 using overloaded '<<' operator
    cout << e1 << endl;

    return 0;
}
