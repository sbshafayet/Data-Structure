#include <iostream>

using namespace std;

class addition
{
    //public:
    private:
            int a,b;
    public:
            void set_a (int i);
            void set_b (int j);
            int summation();
};

void addition::set_a(int i)
{
    a=i;
}

void addition::set_b(int j)
{
    b=j;
}

int addition::summation()
{
    return (a+b);
}

int main()
{
    addition obj1;
    int a,b;
    addition obj2;
    cin>>a;
    cin>>b;
    obj1.set_a(a);
    obj1.set_b(b);

    cout<<"\n Final Sum = "<<obj1.summation();

    //cin>>obj2.a;
    //cin>>obj2.b;
    //cout<<"\n Final Sum = "<<obj2.summation();

    return 0;
}
