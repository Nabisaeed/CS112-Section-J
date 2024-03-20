// C++ Program starts here
#include <iostream>
using namespace std;

// Define class1
class class1 {
public:
    // Method in class1
    void method() {
        cout << "This is class1" << endl;
    }
};

// Define class2 which inherits from class1
class class2 : public virtual class1 {
public:
    // Method in class2
    void method1() {
        cout << "This is class2" << endl;
    }
};

// Define class3 which inherits from class1
class class3 : public virtual class1 {
public:
    // Method in class3
    void method2() {
        cout << "This is class3" << endl;
    }
};

// Define class4 which inherits from class2 and class3
class class4 : public class2, public class3 {
public:
    // Method in class4
    void method3() {
        cout << "This is class4" << endl;
    }
};

// Main function
int main() {
    // Create an object of class4
    class4 obj1;

    // Call method from class1
    obj1.method();

    return 0;
}
