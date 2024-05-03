// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;

// Define a class named student
class student {
public:
    string name;
    int reg_no;
    char grade;
    string dep;

    // Constructor with default parameter values
    student(string n = " ", int r = 0, char g = 'A', string d = " ") : name(n), reg_no(r), grade(g), dep(d) {}
};

// Function to read data from a file into an array of student objects
void Read_From_File(string file_name, student arr[], int size) {
    string name;
    int reg_no;
    char grade;
    string dep;

    // Open the file
    ifstream obj(file_name);

    // Read data from the file into the array of student objects
    for (int i = 0; i < size; i++) {
        obj >> name;
        obj >> reg_no;
        obj >> grade;
        obj >> dep;

        // Create a new student object and store it in the array
        arr[i] = student(name, reg_no, grade, dep);
    }
}

int main() {
    string line;
    int size = 0;

    // Open the file to count the number of lines (students)
    ifstream file("database.txt");
    while (getline(file, line)) {
        size++;
    }

    // Create an array of student objects with the determined size
    student arr[size];

    // Read data from the file into the array
    Read_From_File("database.txt", arr, size);

    // Output the data of each student
    for (int i = 0; i < size; i++) {
        cout << "The name of the student " << i + 1 << " is: " << arr[i].name << endl;
        cout << "The reg_no of the student " << i + 1 << " is: " << arr[i].reg_no << endl;
        cout << "The grade of the student " << i + 1 << " is: " << arr[i].grade << endl;
        cout << "The department of the student " << i + 1 << " is: " << arr[i].dep << endl;
    }

    return 0;
}
