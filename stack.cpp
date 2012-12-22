#include<iostream>
#include<cassert>
#include<new>
#include<stdlib.h>
const int MAX=5;
using namespace std;
class stack{

private:
 int top;
int *s;
size_t size=0;

public:

stack(){
s=new int [MAX];
top=0;


}

int push(int elem)
{

  if(top==MAX)
  {


      return -1;

  }
  s[top++]=elem;
  size+=1;
  return 0;
}

int pop()
{

  if(top<1)
        {
            cout<<"Stack Underflow"<<endl;
            exit(0);
        }
size-=1;
return s[--top];

}


   int *get_stack() //accessor method to get the stack
   {

return s;
}

int stacksize()
{

    return size;
}

};

int main(){
stack st=stack();

assert(st.push(10)==0);
assert(st.get_stack()[0] == 10);
assert(st.stacksize()==1);


assert(st.push(11)==0);
assert(st.get_stack()[1] == 11);
assert(st.stacksize()==2);


assert(st.push(12)==0);
assert(st.get_stack()[2] == 12);
assert(st.stacksize()==3);

assert(st.push(13)==0);
assert(st.get_stack()[3] == 13);
assert(st.stacksize()==4);

assert(st.push(14)==0);
assert(st.get_stack()[4] == 14);
assert(st.stacksize()==5);

assert(st.pop()==14);
assert(st.stacksize()==4);

assert(st.pop()==13);
assert(st.stacksize()==3);

assert(st.pop()==12);
assert(st.stacksize()==2);

assert(st.pop()==11);
assert(st.stacksize()==1);

assert(st.pop()==10);
assert(st.stacksize()==0);

assert(st.pop()==1);

}
