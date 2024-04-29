// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;
    
int main()
{
    // Declare variables
    int count = 0;
    char ch;

    // Open the file
    ifstream file("Document1.txt");
    
    // Check if the file is opened successfully
    if (file.is_open()) {
        // Read each character from the file
        while (file.get(ch)) {
            // Increment character count
            count++;
        }

        // Print the total number of characters counted
        cout
<< "The number of characters counted are : " << count << endl;
} else {
// If file opening fails, print an error message
cout << "Error opening file!" << endl;
}
// Close the file
file.close();

return 0;
}