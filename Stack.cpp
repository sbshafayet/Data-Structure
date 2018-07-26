#include <iostream>
using namespace std;
class stack
{
private:
        char a[10];
        int top;

public:
        stack();
        ~stack();
        void push(char ch);
        char pop();
        void show();
};
stack::stack()
{
    top = 0;
}

stack::~stack()
{
    cout<<"\ndestructor\n";
}

void stack::push(char ch)
{
    if(top == 10)
	{
     cout << "Stack is full";
        return ;
	}
      a[top] = ch;
      top++;
}

char stack::pop()
{
    if(top == 0)
	{
    cout << "Stack is empty";
	  return 0;
	}
	top--;
	return a[top];
}

void stack::show()
{
    int i;
    cout<<"\nStack \n";
    for(i=0;i<=top;i++)
    cout<<"\n"<<pop()<<"\n";
}

int main()
{
	stack s1;
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s1.push('d');
	//s1.pop();
	s1.show();
	s1.pop();
	return 0;
}
