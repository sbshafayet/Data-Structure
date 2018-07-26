#include<iostream>
using namespace std;
#define N 5
class Queue{
private:
    int front, rear;
    int q[N];
public:
    Queue()
    {
        front=0;
        rear=-1;
    }
    bool is_empty()
    {
        int empty=0;
        if(front==rear+1)
            empty=1;
        return empty;
    }
    bool is_full()
    {
        int full=0;
        if(rear==N-1)
            full=1;
        return full;
    }
    void en_queue(int x)
    {
        if(is_full())
        {
            cout<<"\nQueue overflow."<<endl;
            return;
        }
        q[++rear]=x;
        cout<<"\nInserted value: "<<x;
    }
    int de_queue( int *x)
    {
        if(is_empty())
        {
            cout<<"\nQueue underflow."<<endl;
            return -1;
        }
        *x=q[front++];
        return 0;
    }
};
int main()
{
    int x=0;
    Queue q=Queue();
    q.en_queue(10);
    q.en_queue(20);
    q.en_queue(30);
    q.en_queue(40);
    q.en_queue(50);

    if(q.de_queue(&x)==0)
        cout<<"\nDeleted item: "<<x;
    if(q.de_queue(&x)==0)
        cout<<"\nDeleted item: "<<x;
    if(q.de_queue(&x)==0)
        cout<<"\nDeleted item: "<<x;
    if(q.de_queue(&x)==0)
        cout<<"\nDeleted item: "<<x;
    if(q.de_queue(&x)==0)
        cout<<"\nDeleted item: "<<x;
    cout<<endl;
    return 0;
}
