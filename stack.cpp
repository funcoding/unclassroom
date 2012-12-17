#include<iostream>
#include<cassert>
#include<new>
const int MAX=5;
using namespace std;
class stack{

private:
 int top;
int *s;
int y;

public:

stack(){
s=new int [MAX]; //allocating dynamic memory
 top=0;

}

int push(int elem)
{

  if(top==MAX)
  {

     delete[] s; //deallocating memory
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


   int* get_stack() //accessor method to get the stack
   {

return s;
}


};

int main(){
stack st=stack();
assert(st.push(10)==0);
assert(st.get_stack()[0] == 10);
assert(sizeof(st.get_stack())/sizeof(int) == 1);

assert(st.push(11)==0);
assert(st.get_stack()[1] == 11);
assert(sizeof(st.get_stack())/sizeof(int) == 1);


assert(st.push(12)==0);
assert(st.get_stack()[2] == 12);
assert(sizeof(st.get_stack())/sizeof(int) == 1);

assert(st.push(13)==0);
assert(st.get_stack()[3] == 13);
assert(sizeof(st.get_stack())/sizeof(int) == 1);

assert(st.push(14)==0);
assert(st.get_stack()[4] == 14);
assert(sizeof(st.get_stack())/sizeof(int) == 1);

/*assert(st.push(15)==5);
assert(st.get_stack()[5]  == 15);
assert(sizeof(st.get_stack())/sizeof(int) == 1);*/

assert(st.pop()==14);
assert(st.pop()==13);
assert(st.pop()==12);
assert(st.pop()==11);
assert(st.pop()==10);
assert(st.pop()==1);


}
