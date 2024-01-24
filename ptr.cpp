// C++ Program starts here
#include <iostream>
using namespace std;
    
    struct person{

int age;
string name;
person * ptr;

    };
int main()
{
    
    person p1;
    p1.name="Sajid Ali";
    p1.age=28;

    p1.ptr=&p1;
    cout<<p1.ptr->name<<endl;
     cout<<p1.ptr->age<<endl;

     return 0;
    
}