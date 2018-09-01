#include <iostream>

using namespace std;

class addition
{

    public:
            int a,b;
            int summation(){
                return (a+b);
            }

};

int main()
{
    addition obj1;

    cin>>obj1.a;
    cin>>obj1.b;


    cout<<"\n Final Sum = "<<obj1.summation();

    //cin>>obj2.a;
    //cin>>obj2.b;
    //cout<<"\n Final Sum = "<<obj2.summation();

    return 0;
}
