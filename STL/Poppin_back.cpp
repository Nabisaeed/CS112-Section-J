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

    // Removing the last two elements from the vector
    v1.pop_back();
    v1.pop_back();

    // Printing the elements of the modified vector
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << "   ";
    }
    cout << endl;
    
    return 0;
}
