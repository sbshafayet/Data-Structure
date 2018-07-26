#include<iostream>

using namespace std;

class even_odd{
public:
    even(int a)
    {
        int i;
        for(i=1;i<=a/2;i++)
        {
            if(a%2==0)
                return 0;
        }
        return 1;
    }
};

int main()
{
    int n, result;
    cout<<"Enter an integer number to check even or odd: ";
    cin>>n;
    even_odd obj;
    obj.even(n);
    result=obj.even(n);
    if(result==0)
        cout<<n<<" is an even number."<<endl;
    else
        cout<<n<<" is an odd number."<<endl;
  return 0;
}
