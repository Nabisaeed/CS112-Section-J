// C++ Program starts here
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // Including numeric header for accumulate function
using namespace std;

int main()
{
    // Initializing a vector v1 with 5 elements: 1, 2, 3, 4, 5
    vector<int> v1(5); // 1, 2, 3, 4, 5

    // Filling the vector with consecutive integers starting from 1
    for(int i = 0; i < 5; i++) {
        v1[i] = i + 1;
    }

    int sum;

    // Calculating the sum of all elements in the vector using accumulate function
    sum = accumulate(v1.begin(), v1.end(), 0);

    // Printing the sum of the vector elements
    cout << "The summation of vector is: " << sum << endl;
    
    return 0;
}
