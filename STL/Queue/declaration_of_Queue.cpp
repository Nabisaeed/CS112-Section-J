// C++ Program starts here

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q1; // Declare a queue of integers

    // Push some elements into the queue
    q1.push(20);
    q1.push(25);
    q1.push(30);
    q1.push(35);
    q1.push(40);

    // Display the size of the queue
    cout << "The size of queue is: " << q1.size() << endl;

    // Iterate through the queue until it's empty
    while (!q1.empty()) {
        // Display the value of the element at the front of the queue
        cout << "The value of the element at the front is: " << q1.front() << endl;

        // Remove the element at the front of the queue
        q1.pop();
    }

    return 0;
}
