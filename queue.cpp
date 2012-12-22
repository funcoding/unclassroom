#include<iostream>
#include<new>
#include<cassert>
#include<stdlib.h>
const int MAX=4;
using namespace std;

class que
{
    private:
    int head, tail;
    size_t size=0;
    int *q;
    public:
    que()
    {q=new int [MAX];
        head=0;
        tail=0;
    }

    int enqu(int elem)
    { q[tail]=elem;
       size+=1;
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
    {cout<<"que underflow"<<endl;
    exit(0);}

     if(head==MAX)
        {head=0;
        }
        else
        {
        head+=1;
        }
        size-=1;
        return q[head++];
    }
    int *get_queue()
    {
        return q;
    }

    int quesize()
    {
        return size;
    }

};

int main()
{

    que qu=que();
    assert(qu.enqu(10)==0);
    assert(qu.get_queue()[0] == 10);
    assert(qu.quesize()==1);

    assert(qu.enqu(11)==0);
    assert(qu.get_queue()[1] == 11);
    assert(qu.quesize()==2);

    assert(qu.enqu(12)==0);
    assert(qu.get_queue()[2] == 12);
    assert(qu.quesize()==3);

    assert(qu.enqu(13)==0);
    assert(qu.get_queue()[3] == 13);
    assert(qu.quesize()==4);

    assert(qu.enqu(14)==0);
    assert(qu.get_queue()[4] == 14);
    assert(qu.quesize()==5);





}

