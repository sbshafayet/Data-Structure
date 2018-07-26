#include<iostream>

using namespace std;

class prime
{
public:
    int check_prime(int a)
    {
        int i;
        for(i=2;i<=a-1;i++)
        {
            if(a%i==0)
                return 0;
        }
        return 1;
    }
};

int main()
{
    int n,result;
    cout<<"Enter an integer number to check prime or not: ";
    cin>>n;
    prime obj;
    obj.check_prime(n);
    result= obj.check_prime(n);
    if(result==1)
        cout<<n<<" is a prime number."<<endl;
    else
        cout<<n<<" is not a prime number."<<endl;
}
