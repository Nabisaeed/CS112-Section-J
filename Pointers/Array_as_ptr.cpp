// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int arr[5]={1,12,25,7,11};

    cout<<arr<<endl; // Address of the first element will be printed 

    int * first=arr;  

    cout<<*first+2<<endl;  // Address of the 3rd element will be printed 
    
     return 0;
    
}