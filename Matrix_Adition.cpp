#include<iostream>

using namespace std;

class Matrix{
private:
int a[50][50],b[50][50],c[50][50],x,y,i,j;
public:
void values()
{
cout<<"Enter the row & column of matrix1: ";
cin>>x>>y;
cout<<"Enter the values of matrix1:\n";
for(i=1;i<=x;i++)
{
for(j=1;j<=y;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter the row & column of matrix2: ";
cin>>x>>y;
cout<<"Enter the values of matrix2:\n";
for(i=1;i<=x;i++)
{
for(j=1;j<=y;j++)
{
cin>>b[i][j];
}
}
}
void addition()
{
cout<<"\nAddition Result:\n";
for(i=1;i<=x;i++)
{
for(j=1;j<=y;j++)
{
c[i][j]=a[i][j]+b[i][j];
cout<<c[i][j]<<"\t";
}
cout<<endl;
}
}
};


int main()
{
Matrix obj;
obj.values();
obj.addition();
}
