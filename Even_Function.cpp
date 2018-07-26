#include<iostream>

using namespace std;

int check_even(int a)
{
    int i;
    for(i=1;i<=a/2;i++)
    {
        if(a%2==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n, result;
    cout<<"Enter an integer number to check even or odd: ";
    cin>>n;
    result=check_even(n);
    if(result==0)
        cout<<n<<" is an even number."<<endl;
    else
        cout<<n<<" is an odd number."<<endl;
}
