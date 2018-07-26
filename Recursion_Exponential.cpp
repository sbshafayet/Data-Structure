#include<iostream>
using namespace std;
int exp(int n, int p)
{
    if(p==0)
        return 1;
    return n*exp(n, p-1);
}
int main()
{
    int n,p;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"\nEnter the power: ";
    cin>>p;
    cout<<"\nResult: "<<exp(n,p)<<endl;
}
