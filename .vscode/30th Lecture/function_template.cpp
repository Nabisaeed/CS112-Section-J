// C++ Program starts here

#include <iostream>
using namespace std;

// Template function to add two numbers of potentially different types
template<typename T, typename Y>
void add(T a, Y b) {
    // Print the result of adding the two numbers
    cout << "The addition of two numbers is : " << a + b << endl;
}

int main() {
    // Calling the add function with template argument <int> and arguments 20.11 and 50
    add<int>(20.11, 50);
    
    return 0;
}
