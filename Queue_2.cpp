#include<iostream>
using namespace std;
#define Max 101
class Queue
{
private:
	char A[Max];
	int front, rear;
public:
    Queue()
	{
		front = -1;
		rear = -1;
	}

	bool Empty()
	{
		return (front == -1 && rear == -1);
	}

	bool Full()
	{
		return (rear+1)%Max == front ? true : false;
	}

	void Enqueue(char x)
	{
		cout<<"Enqueuing "<<x<<" \n";
		if(Full())
		{
			cout<<"Error: Queue is Full\n";
			return;
		}
		if (Empty())
		{
			front = rear = 0;
		}
		else
		{
		    rear = (rear+1)%Max;
		}
		A[rear] = x;
	}

	void Dequeue()
	{
		cout<<"Dequeuing \n";
		if(Empty())
		{
			cout<<"Error: Queue is Empty\n";
			return;
		}
		else if(front == rear )
		{
			rear = front = -1;
		}
		else
		{
			front = (front+1)%Max;
		}
	}

	int Front()
	{
		if(front == -1)
		{
			cout<<"Error: cannot return front from empty queue\n";
			return -1;
		}
		return A[front];
	}

	void Print()
	{
		int count = (rear+Max-front)%Max + 1;
		cout<<"Queue       : ";
		for(int i = 0; i <count; i++)
		{
			int index = (front+i) % Max;
			cout<<A[index]<<" ";
		}
		cout<<"\n\n";
	}
};
int main()
{

   Queue Q;
   Q.Enqueue('d');  Q.Print();
   Q.Enqueue('e');  Q.Print();
   Q.Enqueue('f');  Q.Print();
   Q.Dequeue();	  Q.Print();
   Q.Enqueue('g');  Q.Print();
}
