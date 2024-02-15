// C++ Program starts here

#include <iostream>
using namespace std;

// Define a structure to represent time with hours, minutes, and seconds
struct Time {
    int hours;      // Hours component of time
    int minutes;    // Minutes component of time
    int seconds;    // Seconds component of time
};

int main() {
    // Create a pointer to a Time structure and allocate memory for it dynamically
    Time *p = new Time;

    // Prompt the user to enter the value of hours and read it from the standard input
    cout << "Enter the value of hours :" << endl;
    cin >> p->hours;

    // Prompt the user to enter the value of minutes and read it from the standard input
    cout << "Enter the value of minutes :" << endl;
    cin >> p->minutes;

    // Prompt the user to enter the value of seconds and read it from the standard input
    cout << "Enter the value of seconds :" << endl;
    cin >> p->seconds;

    // Free dynamically allocated memory
    delete p;

    // Return 0 to indicate successful execution of the program
    return 0;
}
