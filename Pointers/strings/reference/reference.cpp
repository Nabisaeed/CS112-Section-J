// C++ Program starts here
#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize variable 'x' with the value 30
    int x = 30;

    // Declare reference variable 'y' which is an alias for 'x'
    int &y = x;

    /* int &y; 
       y=x;   will get an error you have to intilize the reference variable at the time of creation
    */

    // Assign the value 100 to the variable 'y', which is a reference to 'x'
    y = 100;

    // Print the value of 'x' after modifying it through the reference 'y'
    cout << x << endl;

    // Return 0 to indicate successful execution of the program
    return 0;
}
