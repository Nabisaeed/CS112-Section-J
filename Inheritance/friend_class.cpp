// C++ Program starts here

#include <iostream>
using namespace std;

// Forward declaration of class User (needed because it's used in class Post)
class User;

// Class definition of Post
class Post {
private:
    int date;
    string text; // Private member variable to store text

    // Declaring User as a friend class to allow access to private members
    friend class User;
};

// Class definition of User
class User {
public:
    // Member function to edit the text of a Post object
    void editpost(Post & obj, string t) {
        obj.text = t; // Modifying the text of the Post object

        cout << t << endl; // Displaying the new text
    }
};

// Main function
int main() {
    Post p1; // Creating a Post object
    User u1; // Creating a User object

    // Editing the post text using the editpost function of User
    u1.editpost(p1, "This is new text ");

    return 0;
}
