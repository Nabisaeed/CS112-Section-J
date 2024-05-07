// C++ Program starts here
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Declaring a vector v1 with size 5
    vector<int> v1(5); // 1, 2, 3, 4, 5

    // Taking input for the elements of v1 from the user
    for(int i = 0; i < 5; i++) {
        cin >> v1[i];
    }

    // Printing the vector before sorting
    cout << "The vector before sorting is: " << endl;
    for(int n : v1) {
        cout << n << "  ";
    }
    cout << endl;

    // Sorting the vector in descending order
    sort(v1.begin(), v1.end(), greater<int>());

    // Printing the vector after sorting
    cout << "The vector after sorting is: " << endl;
    for(int n : v1) {
        cout << n << "  ";
    }
    cout << endl;

    return 0;
}
