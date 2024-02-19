// C++ Program starts here

#include <iostream>
using namespace std;

// Function to dynamically allocate an array of integers of size n,
// prompt the user to input values for each element, and return a pointer to the array
int* fun1(int n) {
    // Dynamically allocate memory for an array of integers of size n
    int* arr = new int[n];
    
    // Prompt the user to input values for each element of the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Return the pointer to the allocated array
    return arr;
}

int main() {
    int size;
    // Prompt the user to input the size of the array
    cout << "Enter the size of the array : " << endl;
    cin >> size;

    // Call fun1 function to allocate memory for an array and get a pointer to it
    int* p = fun1(size);

    // Output the elements of the array
    for(int i = 0; i < size; i++) {
        cout << p[i] << endl;
    }

    // Free dynamically allocated memory
    delete [] p;

    // Return 0 to indicate successful execution of the program
    return 0;
}
