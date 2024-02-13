// C++ Program starts here
#include <iostream>
using namespace std;

int main()
{
    // Declare variable to store the size of the array
    int n;

    // Prompt user to enter the size of the array
    cout << "Enter the size of the array: " << endl;
    // Read the input size from the user
    cin >> n;

    // Dynamically allocate memory for an array of size 'n' and store its address in 'arr'
    int *arr = new int[n];

    // Assign a value of 100 to the first element of the array
    arr[0] = 100;

    // Print the value of the first element of the array
    cout << arr[0] << endl;

    // Deallocate the dynamically allocated memory for the array
    delete[] arr;

    // Accessing arr[0] after deletion results in undefined behavior
    // Printing it here will likely show a garbage value or crash
    cout << arr[0] << endl;

    // Return 0 to indicate successful execution of the program
    return 0;
}
