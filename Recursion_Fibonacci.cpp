#include<iostream>
using namespace std;
int Fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return (Fibonacci(n-1)+Fibonacci(n-2));
}
int main()
{
    int n;
    cout<<"Enter an integer number: ";
    cin>>n;
    cout<<"\nFibonacci number for "<<n<<" is: "<<Fibonacci(n)<<endl;
    return 0;
}
