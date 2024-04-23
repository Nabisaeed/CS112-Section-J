// C++ Program starts here

#include <iostream>
using namespace std;

// Template class Pair
template <class T1, class T2>
class Pair {
private:
    T1 X;  // First value of type T1
    T2 Y;  // Second value of type T2

public:
    // Constructor initializing X and Y
    Pair(T1 a, T2 b): X(a), Y(b) {}

    // Member function to display values of X and Y
    void display() {
        cout << "The value of X is " << X << endl;
        cout << "The value of Y is " << Y << endl;
    }
};

int main() {
    // Creating an object p1 of type Pair with int and float types
    Pair<int, float> p1(100, 112.15);
    
    // Displaying the values of X and Y
    p1.display();
    
    return 0;
}
