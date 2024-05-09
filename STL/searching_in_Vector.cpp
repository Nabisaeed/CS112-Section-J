// C++ Program starts here
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Initializing a vector v1 with 5 elements: 1, 2, 3, 4, 5
    vector<int> v1(5); // 1, 2, 3, 4, 5

    // Filling the vector with consecutive integers starting from 1
    for(int i = 0; i < 5; i++) {
        v1[i] = i + 1;
    }

    // Declaring a variable to store the value to search
    int search;

    // Prompting the user to enter the value to search
    cout << "Enter the value to search: ";
    cin >> search;

    // Using the find function to search for the value in the vector
    auto it = find(v1.begin(), v1.end(), search);

    // Checking if the value is found in the vector
    if(it != v1.end()) {
        // If found, printing the index at which the value is found
        cout << "The value is found at index: " << distance(v1.begin(), it) << endl;
    } else {
        // If not found, indicating that the value is not found in the vector
        cout << "The value is not found in vector" << endl;
    }

    return 0;
}
