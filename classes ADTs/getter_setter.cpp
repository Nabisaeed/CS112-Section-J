// C++ Program starts here
#include <iostream>
using namespace std;

// Class employee
class employee {
private:
    int age;
    string name;
    int salary;

public:
    // Method to set the employee's information
    void setter(int x, string n, int s) {
        age = x;
        name = n;
        salary = s;
    }

    // Method to get the age of the employee
    int get_age() {
        return age;
    }

    // Method to get the name of the employee
    string get_name() {
        return name;
    }

    // Method to get the salary of the employee
    int get_salary() {
        return salary;
    }
}; 

int main() {
    // Creating an object of class employee
    employee e1;
    
    // Setting employee's information
    e1.setter(28, "Hamid", 500);

    // Displaying employee's information
    cout << "The age of employee is " << e1.get_age() << endl;
    cout << "The name of employee is " << e1.get_name() << endl;
    cout << "The salary of employee is " << e1.get_salary() << endl;
    
    return 0;
}
