#include <iostream>
 using namespace std;
 class Queue
 {
 private:
      int * arr;
      int max, front, rear;
 public:
      Queue()
      {
           cout << "Enter the size of Queue : ";
           cin >> max;
           arr = new int[max];
           front = -1;
           rear = -1;
      }
      bool isFull()
      {
           return (rear == max - 1);
      }
      bool isEmpty()
      {
           return (front == rear+1);
      }
      void Enqueue(int x)
      {
           if (!isFull())
           {
                rear++;
                arr[rear] = x;
                if (front == -1)
                     front = 0;
                cout << "Value Entered : " << x<<endl;
           }
           else
           {
                cout << "Stack Overflow" << endl;
           }
      }
      void Dequeue()
      {
           if (!isEmpty())
           {
                cout << "Value Removed : "<<arr[front] << endl;
                front++;
           }
           else
                cout << "Stack Underflow " << endl;
      }
 };
int main()
 {
      Queue queue;
      int x = 1;
      while (!queue.isFull())
      {
           queue.Enqueue(x);
           x++;
      }
      while (!queue.isEmpty())
      {
           queue.Dequeue();
      }
 }
