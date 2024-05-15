// C++ Program starts here

#include <iostream>
#include <vector>

using namespace std;

// Define a class named student
class student {
public:
    string name;
    int age;

    // Constructor with default values for name and age
    student(string n = "", int a = 0) : name(n), age(a) {}

    // Method to display the details of the student
    void display() {
        cout << "The name of the student is: " << name << endl;
        cout << "The age of the student is: " << age << endl;
    }
};

int main() {
    // Declare a vector of student objects with size 2
    vector<student> vec(2);

    // Input names and ages for two students
    for (int i = 0; i < 2; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> vec[i].name;

        cout << "Enter the age of student " << i + 1 << ": ";
        cin >> vec[i].age;
    }

    // Display details of each student in the vector
    for (student n : vec) {
        n.display();
    }

    cout << endl;

    return 0;
}
