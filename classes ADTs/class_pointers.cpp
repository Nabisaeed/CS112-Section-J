// C++ Program starts here
#include <iostream>
using namespace std;
    
    class user{

    public:
        int reg_no;
        string name;
        int DOB;
    };

class admin{
public: 

void add_user(int size){

user* p= new user[size];
for(int i=0; i<size; i++){

    cout<<"Enter the name of user "<<i+1<<endl;
    cin>>p[i].name;

    cout<<"Enter the reg_no of user "<<i+1<<endl;
    cin>>p[i].reg_no;

    cout<<"Enter the DOB of user "<<i+1<<endl;
    cin>>p[i].DOB;
}


}

};
    
int main()
{
    int s;
    cout<<"Enter the number of users"<<endl;
    cin>>s;

    admin a1;

    a1.add_user(s);
    
     return 0;
    
}