// C++ Program starts here

#include <iostream>
using namespace std;

// Namespace declaration
namespace name1 {
    // Declaration of an integer variable named 'cout' inside namespace 'name1'
    int cout = 1000;
}

int main() {
    // Declaration of an integer variable named 'cout' in the main function scope
    int cout = 100;
    
    // Printing the value of the local variable 'cout' followed by the value of 'name1::cout'
    std::cout << cout << name1::cout;
    
    return 0;
}
