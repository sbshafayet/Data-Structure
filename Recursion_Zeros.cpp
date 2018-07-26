#include<iostream>
using namespace std;
int zeros(int n)
{
    if(n==0)
        return 1;
    else if (n<10 && n> -10)
        return 0;
    else
        return zeros(n/10)+zeros(n%10);
}
int main()
{
    int n;
    cout<<"Enter an integer number: ";
    cin>>n;
    cout<<"Number of zero: "<<zeros(n)<<endl;
    return 0;
}
