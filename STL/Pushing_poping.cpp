// C++ Program starts here
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Declaring a vector vec1 with size 5
    vector<int> vec1(5);

    // Taking input for the elements of vec1 from the user
    for(int i = 0; i < 5; i++) {
        cin >> vec1[i];
    }

    // Removing the last two elements from vec1
    vec1.pop_back();
    vec1.pop_back();

    // Printing the elements of vec1 after removal
    for(int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << endl;
    }

    return 0;
}
