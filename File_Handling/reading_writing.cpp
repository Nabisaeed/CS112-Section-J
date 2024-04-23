// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Declaration of variables
    string line;
    
    // Opening the file
    fstream obj("Document1.txt", ios::in | ios::out);

    // Checking if the file is opened successfully
    if (obj.is_open()) {
        // Reading and printing each line of the file
        while (getline(obj, line)) {
            cout << line << endl;
        }

        // Clearing the end-of-file flag
        obj.clear();

        // Moving the file pointer to the beginning of the file
        obj.seekp(0, ios::beg);

        // Writing a new line at the beginning of the file
        obj << "This line will be added" << endl;
    }
    else {
        // Displaying an error message if the file cannot be opened
        cout << "Error: Unable to open the file" << endl;
    }

    // Exiting the program
    return 0;
}
