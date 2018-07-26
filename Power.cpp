#include<iostream>
using namespace std;
int power(int n, int p)
{
    if (p==0)
        return 1;
    return n*power(n,p-1);
}
int main()
{
    int n,p;
    cout<<"Enter an integer number: ";
    cin>>n;
    cout<<"\nEnter the power of number: ";
    cin>>p;
    cout<<"\nResult is: "<<power(n,p)<<endl;
}
