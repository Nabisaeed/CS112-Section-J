// C++ Program starts here
#include <iostream>
using namespace std;
    
  void isodd(int n);
  
  
  void iseven(int n){

    if(n==0){
        cout<<"The number is even "<<endl;
    }

    else{

        isodd(n-1);
    }

  }  

  void isodd(int n){

 if(n==0){

    cout<<"The number is odd "<<endl;
 }

else {

    iseven(n-1);
}

  }
int main()
{
    int x=24;

    iseven(x);
    
     return 0;
    
}