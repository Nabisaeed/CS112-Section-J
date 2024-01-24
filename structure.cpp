// C++ Program starts here
#include <iostream>
using namespace std;

// Define a structure 'car' to represent car information
struct car {
    int model;
    string company;
    int engine;
    int price;
};

int main() {
    // Create an array of 'car' structures to store information about 2 cars
    car arr[2];

    // Input information for each car in the array
    for (int i = 0; i < 2; i++) {
        cout << "Enter the value of model for car " << i + 1 << endl;
        cin >> arr[i].model;

        cout << "Enter the value company for car " << i + 1 << endl;
        cin >> arr[i].company;

        cout << "Enter the value of engine for car " << i + 1 << endl;
        cin >> arr[i].engine;

        cout << "Enter the value for car price " << i + 1 << endl;
        cin >> arr[i].price;
    }

    // Display information for each car in the array
    for (int i = 0; i < 2; i++) {
        cout << "Details for car " << i + 1 << ":" << endl;
        cout << "Company: " << arr[i].company << endl;
        cout << "Model: " << arr[i].model << endl;
        cout << "Engine: " << arr[i].engine << endl;
        cout << "Price: " << arr[i].price << endl;
        cout << endl; // Adding an empty line for better readability
    }

    return 0;
}
