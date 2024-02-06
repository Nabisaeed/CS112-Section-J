// C++ Program starts here
#include <iostream>
using namespace std;
    

void print(void * ptr, char type){

    switch (type)
    {
    case 'i':
    case 'I':
    cout<<"The value is :"<<*((int*)ptr) <<endl;


        break;  

    case 'd':
    case 'D':
    cout<<"The value is :"<<((double*)ptr) <<endl;
    

        break;

    case 'c':
    case 'C':
    cout<<"The value is :"<<*((char*)ptr) <<endl;
    

        break;
    
    default:
    cout<<"Inavlid value "<<endl;
        break;
    }
}
    
int main()
{
    int x=500;
    char grade='A';
    double height= 6.2;

    // print(&x, 'i');
    print(&grade, 'C');
     return 0;
    
}