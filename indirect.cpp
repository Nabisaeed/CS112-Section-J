// C++ Program starts here

#include <iostream>
using namespace std;

// Function prototype for isodd
void isodd(int n);

// Function to check if a number is even
void iseven(int n) {

    // Base case: if the number is 0, it is even
    if(n == 0) {
        cout << "The number is even " << endl;
    }
    else {
        // Recursive case: if the number is not 0, check if n-1 is odd
        isodd(n - 1);
    }
}

// Function to check if a number is odd
void isodd(int n) {

    // Base case: if the number is 0, it is odd
    if(n == 0) {
        cout << "The number is odd " << endl;
    }
    else {
        // Recursive case: if the number is not 0, check if n-1 is even
        iseven(n - 1);
    }
}

// Main function
int main() {

    // Example usage with x = 24
    int x = 24;

    // Call the iseven function to check if x is even
    iseven(x);

    // Return 0 to indicate successful execution
    return 0;
}
