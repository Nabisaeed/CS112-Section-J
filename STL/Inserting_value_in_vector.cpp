// C++ Program starts here
#include <iostream>
#include <vector>
#include <algorithm> // Included for using reverse() function
using namespace std;

int main()
{
    vector<int> v1(5); // Vector with 5 elements initialized to default value (0)

    // Filling the vector with values 0, 1, 2, 3, 4
    for(int i = 0; i < 5; i++){
        v1[i] = i;
    }

    cout << "The values before insertion are :" << endl;
    // Displaying the values of the vector before insertion
    for(int n : v1){
        cout << n << " ";
    }
    cout << endl;

    // Inserting value 100 at index 1 (second position)
    v1.insert(v1.begin() + 1, 100);

    cout << "The values after insertion are :" << endl;
    // Displaying the values of the vector after insertion
    for(int n : v1){
        cout << n << " ";
    }
    cout << endl;

    // Reversing the vector
    reverse(v1.begin(), v1.end());

    // Displaying the values of the vector after reversal
    for(int n : v1){
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}
