// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initializing a vector v1 with 5 elements: 1, 2, 3, 4, 5
    vector<int> v1(5); // 1, 2, 3, 4, 5

    // Filling the vector with consecutive integers starting from 1
    for(int i = 0; i < 5; i++) {
        v1[i] = i + 1;
    }

    // Printing the first value in the vector
    cout << "The first value is: " << v1.front() << endl;

    // Printing the last value in the vector
    cout << "The last value is: " << v1.back() << endl;

    // Printing the value at index 2 in the vector
    cout << "The value at index 2 is: " << v1.at(2) << endl;

    // Checking if the vector is empty
    cout << "The vector is empty: " << v1.empty() << endl;
    
    return 0;
}
