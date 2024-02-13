// C++ Program starts here

#include <iostream>
using namespace std;

// Enum to represent colors with assigned values
enum color {
    red = 50, blue, green, yellow
};

// Typedef for easier use of the enum type
typedef color c2;

int main() {
    // Initializing a variable of type c2 (color)
    c2 c1 = green;

    int sum;
    sum=(red + blue + green + yellow)* (2);
 // The preceding statement indicates that arithmetic operations are permitted on elements within the enumerated type. 
    cout<<sum<<endl;


    // Switch statement to check the value of c1
    switch (c1) {
        case red:
            cout << "The color is red" << endl;
            break;

        case blue:
            cout << "The color is blue" << endl;
            break;

        case green:
            cout << "The color is green" << endl;
            break;

        case yellow:
            cout << "The color is yellow" << endl;
            break;

        default:
            cout << "Invalid Color" << endl;
            break;
    }

    // Return 0 to indicate successful execution
    return 0;
}
