// C++ Program starts here
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Declaring an empty vector vec1
    vector<int> vec1;

    // Adding elements to vec1 using push_back
    vec1.push_back(7);
    vec1.push_back(9);
    vec1.push_back(11);

    // Printing the elements of vec1 using an iterator
    for(auto it = vec1.begin(); it != vec1.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
