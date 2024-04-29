// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;
    
int main()
{
    // Declare variables
    string word;
    int count = 0;

    // Open the file
    ifstream file("Document1.txt");
    
    // Check if the file is opened successfully
    if (file.is_open()) {
        // Read each word from the file
        while (file >> word) {
            // Increment word count
            count++;
        }

        // Print the total number of words counted
        cout << "The number of words counted is : " << count << endl;
    } else {
        // If file opening fails, print an error message
        cout << "Error opening file!" << endl;
    }

    // Close the file
    file.close();

    return 0;
}
