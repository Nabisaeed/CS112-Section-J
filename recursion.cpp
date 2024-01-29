// C++ Program starts here

#include <iostream>
using namespace std;

// Recursive function to calculate the sum of numbers from x to y
int recursion1(int x, int y) {
    
    // Base case: If x is equal to y, return x
    if(x == y) {
        return x;
    }
    else {
        // Recursive case: Return the sum of x and the result of the function called with x+1 and y
        return x + recursion1(x + 1, y);
    }
}

// Main function
int main() {
    // Initialize values for x and y
    int x = 2;
    int y = 4;

    // Call the recursion1 function with x and y, and print the result
    cout << recursion1(x, y) << endl;

    // The commented code below is an equivalent non-recursive solution using a loop
    // int sum = 0;
    // for(int i = x; i <= y; i++) {
    //     sum += i;
    // }
    // cout << sum << endl;

    // Return 0 to indicate successful execution
    return 0;
}
