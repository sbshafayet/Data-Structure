#include <iostream>
using namespace std;
#define MAX 5

//Declaration of Double Stack
class DStack
{
    private:
        int top1;
        int top2;
        int ele[MAX];

    public:
        DStack();
        void pushA(int  item);
        void pushB(int  item);
        int  popA (int *item);
        int  popB (int *item);

};

//Initialization of Double Stack
DStack::DStack()
{
    top1 = -1;
    top2 = MAX;
}

//Push Operation on Stack1
void DStack::pushA( int item )
{
    if( top2 == top1 + 1 )
    {
        cout<<"\nStack Overflow Stack1";
        return;
    }

    top1++;
    ele[top1] = item;

    cout<<"\nInserted item in Stack1 : "<< item;
}

//Push Operation on Stack2
void DStack::pushB( int item )
{
    if( top2 == top1 + 1 )
    {
        cout<<"\nStack Overflow Stack2";
        return;
    }

    top2--;
    ele[top2] = item;

    cout<<"\nInserted item in Stack2 : "<< item;
}

//Pop Operation on Stack1
int DStack::popA( int *item )
{
    if( top1 == -1 )
    {
        cout<<"\nStack Underflow Stack1";
        return -1;
    }

    *item = ele[top1--];
    return 0;
}

//Pop Operation on Stack2
int DStack::popB( int *item )
{
    if( top2 == MAX )
    {
        cout<<"\nStack Underflow Stack2";
        return -1;
    }

    *item = ele[top2++];
    return 0;
}


int main()
{
    int item = 0;

    DStack s = DStack();

    s.pushA(10);
    s.pushA(20);
    s.pushA(30);

    s.pushB(40);
    s.pushB(50);
    s.pushB(60);


    if( s.popA(&item) == 0 )
        cout<<"\nDeleted item From Stack1 : "<< item;
    if( s.popA(&item) == 0 )
        cout<<"\nDeleted item From Stack1 : "<< item;
    if( s.popA(&item) == 0 )
        cout<<"\nDeleted item From Stack1 : "<< item;

    if( s.popB(&item) == 0 )
        cout<<"\nDeleted item From Stack2 : "<< item;
    if( s.popB(&item) == 0 )
        cout<<"\nDeleted item From Stack2 : "<< item;
    if( s.popB(&item) == 0 )
        cout<<"\nDeleted item From Stack2 : "<< item;

    cout<< endl;

    return 0;
}
