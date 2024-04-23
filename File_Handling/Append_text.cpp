// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Creating an fstream object
    fstream obj;

    // Opening the file in output mode
    obj.open("Document1.txt", ios::out);

    // Checking if the file is opened successfully
    if (obj.is_open()) {
        // Writing a line to the file
        obj << "This text will be written on the file" << endl;
    }

    // Closing the file
    obj.close();

    // Opening the file in append mode
    obj.open("Document1.txt", ios::app);

    // Checking if the file is opened successfully
    if (obj.is_open()) {
        // Appending a line to the file
        obj << "This is updated text" << endl;
    }

    // Exiting the program
    return 0;
}
