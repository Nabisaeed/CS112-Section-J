// C++ Program starts here
#include <iostream>
using namespace std;
    
    class employee{

        private:
        int somedata;

        public:
        employee(int x) : somedata(x){}

       friend void show(employee);

    };

    void show(employee e){

        cout<<e.somedata<<endl;
    }
int main()
{
    employee e1(100);
    show(e1);
     return 0;
    
}