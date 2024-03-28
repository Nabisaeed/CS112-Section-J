// C++ Program starts here
#include <iostream>
using namespace std;

class complex {
    private:
        double real;
        double img;

    public:
        // Constructor to initialize real and img with default values of 0
        complex(double r = 0, double i = 0) {
            real = r;
            img = i;
        }

        // Overloading the addition operator '+'
        complex operator +(complex obj) {
            // Adding real and img parts separately and creating a new complex object with the result
            complex c1(real + obj.real, img + obj.img);
            return c1;
        }

        // Function to display the complex number
        void display() {
            cout << real << "+" << img << "i" << endl;
        }
};

int main() {
    // Creating complex number objects c1, c2, c3
    complex c1(100, 200), c2(50, 70), c3;

    // Adding c1 and c2, storing the result in c3
    c3 = c1 + c2;

    // Displaying the result
    c3.display();

    return 0;
}
