#include<iostream>
using namespace std;
int Factorial(int n)
{
    if(n<=1)
        return 1;
    return n*Factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter an integer number: ";
    cin>>n;
    cout<<"\nFactorial of "<<n<<" is: "<<Factorial(n)<<endl;
    return 0;
}
