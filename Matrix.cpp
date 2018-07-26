#include<iostream>
using namespace std;
class Matrix{
private:
    int a[50][50],b[50][50],c[50][50],x,y,i,j;
public:
    void values()
    {
        cout<<"Enter the row and column of matrix 1: ";
        cin>>x>>y;
        cout<<"Enter the values of matrix 1:"<<endl;
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter the row and column of matrix 2: ";
        cin>>x>>y;
        cout<<"Enter the values of matrix 2:"<<endl;
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
            cin>>b[i][j];
            }
        }
    }
    void sub()
    {
        cout<<"\nSubtraction result:"<<endl;
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
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
    obj.sub();
}
