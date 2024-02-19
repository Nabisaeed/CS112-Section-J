// C++ Program starts here
#include <iostream>
using namespace std;

// Defining a class 'vehicle' to represent a vehicle
class vehicle {
public:
    string company;     // Public member variable to store the company name of the vehicle
    int make_model;     // Public member variable to store the make model of the vehicle
    int engine;         // Public member variable to store the engine name of the vehicle
};

int main() {
    vehicle car[3]; // Creating an array of 3 'vehicle' objects to store information about cars

    // Taking input for each car
    for(int i = 0; i < 3; i++) {
        cout << "Enter the company name of car " << i + 1 << " :" << endl;
        cin >> car[i].company;
        cout << "Enter the make model of car " << i + 1 << " :" << endl;
        cin >> car[i].make_model;
        cout << "Enter the engine name of car " << i + 1 << " :" << endl;
        cin >> car[i].engine;
    }

    // Displaying the details of each car
    for(int i = 0; i < 3; i++) {
        cout << "The company name of car " << i + 1 << " :" << car[i].company << endl;
        cout << "The make model of car " << i + 1 << " :" << car[i].make_model << endl;
        cout << "The engine name of car " << i + 1 << " :" << car[i].engine << endl;
    }

    return 0; // Indicating successful execution of the program
}
