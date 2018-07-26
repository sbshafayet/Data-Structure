#include<iostream>
using namespace std;
int fac(int n)
{
    if(n<=1)
        return 1;
    return n*fac(n-1);
}
int main()
{
    int n;
    cout<<"Enter an integer number: ";
    cin>>n;
    cout<<"\nFactorial of "<<n<<" is: "<<fac(n)<<endl;
    return 0;
}
