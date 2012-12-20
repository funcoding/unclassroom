#include<iostream>
#include<cassert>
#include<new>
const int MAX=5;
using namespace std;
class stack{

private:
 int top;
int *s;


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
  return 0;
}

int pop()
{

  if(top<1)
        {
            return 1;
        }
return s[--top];

}


   int *get_stack() //accessor method to get the stack
   {

return s;
}

};

int main(){
stack st=stack();
int size=0;
assert(st.push(10)==0);
assert(st.get_stack()[0] == 10);
size+=1;
assert(size== 1);


assert(st.push(11)==0);
assert(st.get_stack()[1] == 11);
size+=1;
assert(size == 2);


assert(st.push(12)==0);
assert(st.get_stack()[2] == 12);
size+=1;
assert(size== 3);

assert(st.push(13)==0);
assert(st.get_stack()[3] == 13);
size+=1;
assert(size== 4);

assert(st.push(14)==0);
assert(st.get_stack()[4] == 14);
size+=1;
assert(size==5);

assert(st.pop()==14);
size-=1;
assert(size==4);
assert(st.pop()==13);
size-=1;
assert(size==3);

assert(st.pop()==12);
size-=1;
assert(size==2);

assert(st.pop()==11);
size-=1;
assert(size==1);

assert(st.pop()==10);
size-=1;
assert(size==0);
assert(st.pop()==1);


}
