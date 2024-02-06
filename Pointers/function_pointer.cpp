#include <iostream>
using namespace std;

// Function prototype for addition
int add(int, int);

// Function to perform calculations using function pointers
void calculator(int a, int b, int (*p1)(int, int)) {
    cout << "The addition of two numbers is : " << p1(a, b) << endl;
}

int main (){
    
    int (*p1)(int, int);  // Declaring pointer for storing function address 
    p1=&add;     // assigning address of function add
    
    calculator(20, 50, p1); // calling function calculator 
}

// Function definition for addition
int add(int a, int b) {
    return a + b;
}
