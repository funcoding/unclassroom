#include<iostream>
#include<cassert>
#include<new>
const int MAX=10;
using namespace std;
class stack{

private:

   int top;
   int* s;

public:

stack(){   //max
 //init the fields
 top=0;

}

int push(int elem)
{
  //add to *s
  if(top==MAX)
  {
      cout<<"overflow"<<endl;

  }
  else
  {s[top]=elem;
  top=top+1;}

  // return a special return code if stack overflows

}

int pop()
{
  //pop from *s
  if(top==-1)
        {cout<<"Underflow"<<endl;
        }
    else
    {
        top=top-1;
        cout<<"the popped element is "<<s[top+1];

    }
  // return a special return code if the stack underflows
}


   int* get_stack(){

    //accessor method to get the stack

return s;

    }
};

int main(){
stack *st=new stack();
st.push(10);

assert(st.get_stack()[0] == 10); //check right value and left value  //stack of 0 has 10
assert(sizeof(st.get_stack())/sizeof(int) == 1);




// And so on ...
}
