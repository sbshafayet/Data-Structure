#include <iostream>

using namespace std;
/*
int main()
{
    int a,b,c;
    cin>>a;//scanf("%d", &a);
    cin>>b;
    //c = a+b;
    cout<<"\nSum ="<<a+b;
    return 0;
}
*/

int summation (int x, int y)
{
    //int c;
    //c=x+y;
    return (x+y);
}

int main()
{
    int a,b,c;
    cin>>a;//scanf("%d", &a);
    cin>>b;
    //c = summation(a,b);
    cout<<"\nSum ="<< summation(a,b);
    return 0;
}
