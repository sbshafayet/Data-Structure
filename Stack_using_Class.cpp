#include<iostream>
#include<cstdlib>
#define MAX_SIZE 10
using namespace std;
class Stack{
    private:
        int item[MAX_SIZE];
        int top;
    public:
        Stack(){
            top = -1;
        }
        void push(int data){
            item[++top] = data;
        }
        int pop(){
            return item[top--];
        }
        int size(){
            return top+1;
        }
        bool is_empty(){
            if(top==-1)
                return true;
            else
                return false;
        }
        bool is_full(){
            if(top==MAX_SIZE-1)
                return true;
            else
                return false;
        }
        void display(){
            for(int i=0; i<this->size(); i++){
                cout<<item[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    int choice;
    int temp;
    Stack stack;
    while(true){
        cout<<"Choose any one of the following"<<endl;
        cout<<"1. Push Item. "<<endl;
        cout<<"2. Pop Item."<<endl;
        cout<<"3. Size of Stack."<<endl;
        cout<<"4. Display all elements of stack."<<endl;
        cout<<"5. Exit."<<endl;
        cout<<"Your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                if(!stack.is_full()){
                    cout<<"Enter number to push: ";
                    cin>>temp;
                    stack.push(temp);
                }else{
                    cout<<"Can't push. Stack is Full!!"<<endl;
                }
                break;
            case 2:
                if(!stack.is_empty()){
                    cout<<"The number popped is: "<<stack.pop()<<endl;
                }else{
                    cout<<"Cant't pop. Stack is Empty!!"<<endl;
                }
                break;
            case 3:
                cout<<"The size of the stack is: "<<stack.size()<<endl;
                break;
            case 4:
                if(!stack.is_empty()){
                    cout<<"The elements in stack are: ";
                    stack.display();
                    cout<<endl;
                }else{
                    cout<<"Stack is Empty"<<endl;
                }
                break;
            case 5:
                exit(0);
                break;
        }
    }
    return 0;
}
