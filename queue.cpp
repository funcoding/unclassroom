#include<iostream>
#include<new>
#include<cassert>
const int MAX=5;
using namespace std;

class que
{
    private:
    int head, tail;
    int *q;
    public:
    que()
    {q=new int [MAX];
        head=0;
        tail=0;

    }

    int enqu(int elem)
    { q[tail]=elem;
        if(head==(tail+1))
        {return -1;}
        if(tail==MAX)
        {tail=0;
        }
        else
        {
        tail=tail+1;
        return 0;}
        }
    int dequ()
    {if(head==tail)
    {return 1;}

     if(head==MAX)
        {head=0;
        }
        else
        {
        head+=1;
        }
        return q[head++];
    }
    int *get_queue()
    {
        return q;
    }

};

int main()
{

    que qu=que();
    assert(qu.enqu(10)==0);
assert(qu.get_queue()[0] == 10);
assert(sizeof(qu.get_queue())/sizeof(int) == 1);
assert(qu.enqu(11)==0);
assert(qu.enqu(12)==0);
assert(qu.enqu(13)==0);
assert(qu.enqu(14)==0);
assert(qu.enqu(15)==0);



}

