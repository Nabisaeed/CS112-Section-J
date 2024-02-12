// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int arr[5]={1,12,25,7,11};

    cout<<arr<<endl; // Address of the first element will be printed 

    int * first=arr;  

    cout<<*first+2<<endl;  // 1st element will be printed after adding 2.  
    
     return 0;
    
}