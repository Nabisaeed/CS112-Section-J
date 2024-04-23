// C++ Program starts here
#include <iostream>
#include <stdexcept>
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
            // Throwing a runtime_error with a descriptive message
            throw runtime_error("Division by zero");
        }
        // Checking if b is negative
        else if (b < 0) {
            // Throwing an invalid_argument with a descriptive message
            throw invalid_argument("Minus Value");
        }
        // Checking if a is zero
        else if (a == 0) {
            // Throwing a domain_error with a descriptive message
            throw domain_error("Zero Value");
        }
    }
    // Catching runtime_error exception
    catch (runtime_error& e) {
        // Displaying the error message
        cout << e.what() << endl;
    }
    // Catching invalid_argument exception
    catch (invalid_argument& i) {
        // Displaying the error message
        cout << i.what() << endl;
    }
    // Catching domain_error exception
    catch (domain_error& d) {
        // Displaying the error message
        cout << d.what() << endl;
    }

    // Exiting the program
    return 0;
}
