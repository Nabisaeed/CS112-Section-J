// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    char name[]="Hamid";

    char * ptr;

    ptr= &name[0];

    cout<<static_cast<void*> (ptr) <<endl;
     return 0;
    
}