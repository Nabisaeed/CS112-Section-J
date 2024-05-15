// C++ Program starts here

#include <iostream>
#include <fstream>
#include <vector>

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

// Function to read data from a file into a vector of student objects
void Read_From_File(string file_name, vector<student> &v1, int size) {
    string name;
    int reg_no;
    char grade;
    string dep;

    // Open the file
    ifstream obj(file_name);

    // Read data from the file into the vector of student objects
    for (int i = 0; i < size; i++) {
        obj >> name;
        obj >> reg_no;
        obj >> grade;
        obj >> dep;

        // Create a new student object and store it in the vector
        v1[i] = student(name, reg_no, grade, dep);
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

    // Create a vector of student objects with the determined size
    vector<student> vec(size);

    // Read data from the file into the vector
    Read_From_File("database.txt", vec, size);

    // Output the data of each student
    for (int i = 0; i < size; i++) {
        cout << "The name of student " << i + 1 << " is: " << vec[i].name << endl;
        cout << "The reg_no of student " << i + 1 << " is: " << vec[i].reg_no << endl;
        cout << "The grade of student " << i + 1 << " is: " << vec[i].grade << endl;
        cout << "The department of student " << i + 1 << " is: " << vec[i].dep << endl;
    }

    return 0;
}
