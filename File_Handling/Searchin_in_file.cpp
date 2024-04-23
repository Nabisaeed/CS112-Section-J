// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Declaration of variables
    string search, line;
    int line_number = 1;
    bool found = false;

    // Prompting user for input
    cout << "Enter the string you want to search: ";
    cin >> search;
    // Alternatively, you can use getline(cin, search); for multi-word searches

    // Opening the file
    fstream file("Document1.txt", ios::in | ios::out);

    // Checking if the file is opened successfully
    if (file.is_open()) {
        // Looping through each line in the file
        while (getline(file, line)) {
            // Checking if the search string is found in the current line
            if (line.find(search) != string::npos) {
                // Displaying the line number where the string is found
                cout << "The string is found in line number " << line_number << endl;
                // Setting found flag to true
                found = true;
            }
            // Incrementing line number for the next iteration
            line_number++;
        }

        // Displaying message if the search string is not found
        if (!found) {
            cout << "The string is not found inside the document" << endl;
        }
    } else {
        // Displaying an error message if the file cannot be opened
        cout << "Error: Unable to open the file" << endl;
    }

    // Closing the file
    file.close();

    // Exiting the program
    return 0;
}
