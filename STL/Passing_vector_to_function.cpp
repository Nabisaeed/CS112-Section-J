// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;

// Function to alter the values of a vector by multiplying each element by 4
void Alter_Vector(vector<int> &vec) {
    for(int i = 0; i < vec.size(); i++) {
        vec[i] = i * 4;
        cout << vec[i] << " "; // Displaying the altered value
    }
    cout << endl;
}

int main() {
    vector<int> v1(5); // Vector initialized with 5 elements (0, 1, 2, 3, 4)

    // Filling the vector with values 0, 1, 2, 3, 4
    for(int i = 0; i < 5; i++) {
        v1[i] = i;
    }

    cout << "The values of vector in function are :" << endl;
    Alter_Vector(v1); // Calling the function to alter the vector

    cout << "The values of vector in main are :" << endl;
    // Displaying the values of the vector after alteration
    for(int n : v1) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
