// C++ Program starts here
#include <iostream>
using namespace std;
// this is the solution of last question of quiz 03. 
class Int {
    private:
        int x;

    public:
        // Constructor to initialize x with default value 0
        Int(int p1 = 0): x(p1) {}

        // Function to display the value of x
        void display() {
            cout << x << endl;
        }

        // Overloading the addition operator '+'
        Int operator +(Int obj) {
            // Adding the values of x from both objects and creating a new object with the result
            Int obj2(x + obj.x);
            return obj2;
        }
};

int main() {
    // Creating Int objects i1, i2, i3
    Int i1(100), i2(200), i3;

    // Adding i1 and i2, storing the result in i3
    i3 = i1 + i2;

    // Displaying the result
    i3.display();

    return 0;
}
