// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Opening the file in input mode
    ifstream file;
    file.open("Document1.txt", ios::in);

    // Checking if the file is opened successfully
    if (file.is_open()) {
        // Reading and printing each line of the file
        string text;
        while (getline(file, text)) {
            cout << text << endl;
        }
        // Closing the file after reading
        file.close();
    }
    else {
        // Displaying an error message if the file cannot be opened
        cout << "Error: Unable to open the file" << endl;
    }

    // Exiting the program
    return 0;
}
