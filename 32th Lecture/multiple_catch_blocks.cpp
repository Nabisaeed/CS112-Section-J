// C++ Program starts here
#include <iostream>
using namespace std;

int main()
{
    // Declaration of variables
    int a, b, c;

    // Prompting user to enter values for a and b
    cout << "Enter the value of A: " << endl;
    cin >> a;
    cout << "Enter the value of B: " << endl;
    cin >> b;

    try {
        // Checking if division by zero will occur
        if (b == 0) {
            // Throwing an exception with an integer value
            throw 505;
        }
    }
    // Catching the exception of type int
    catch (int n) {
        // Displaying the type of error found
        cout << "The type of error is: " << n << endl;
    }

    // Exiting the program
    return 0;
}
