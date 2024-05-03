// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declare an array to store integer values
    int value[3];
    // Declare a variable to store a character
    char ch;

    // Open the file "simple_data.txt" for reading
    ifstream file("simple_data.txt");

    // Read three integers followed by a character from the file into the array
    for (int i = 0; i < 3; i++) {
        file >> value[i];
        file >> ch;
    }

    // Output the values stored in the array
    for (int i = 0; i < 3; i++) {
        cout << value[i] << endl;
    }

    return 0;
}
