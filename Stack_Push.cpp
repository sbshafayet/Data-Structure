#include <iostream>
using namespace std;

class stack{


 public:

      int stk[100], top;

     stack ()
     {
         top=-1;

     }

     void push(){
      if (top>100)
      {
          cout<<"The stack is full\n";

      }
     else{
            false;

     }

}
};

int main (){

stack s;
s.push();
return 0;
}

