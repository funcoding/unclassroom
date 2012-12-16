#include<iostream>
#include<stdlib.h>
using namespace std;

class que
{
    private:
    int n,head,tail,q[],del;
    public:

    que()
    {
    cout<<"enter the size"<<endl;
    cin>>n;
        int q[n];

for(int count=1;count<n;count++)
{
    cout<<count<<" ";
}
cout<<endl;
cout<<"Enter the starting index of queue"<<endl;
cin>>head;
tail=head;

}

    void enqu(int val)
    { int siz1=sizeof(q)/sizeof(int);
     q[tail]=val;
    cout<<head<<" "<<tail<<endl;
    if(head==((tail%n)+1))
    {
        cout<<"overflow"<<endl;
        return;
    }


    if(tail==n)
        {tail=1;
        cout<<"tail "<<tail<<endl;
        return;

            }
    else
    {
               tail+=1;
               return;
            }

    }

    void dequ()
    { int siz=sizeof(q)/sizeof(int);
    if(head==tail)
    {
        cout<<"Underflow"<<endl;
        return;
    }
        del=q[head];
        if(head==siz)
        {head=1;
        }
        else
        {
        head+=1;
        }
        return;
    }

    void disp()
    {
        int i;
      if( head <= tail)
      {
for(i=head; i<tail;i++)
cout << q[i]<<" "<<endl;
      }
      else
      {
for(i=head;i<n;i++)
{
cout <<q[i] << " "<<endl;
}
if(head==tail)
{
    cout<<"queue is empty"<<endl;
}
for(i=0;i<tail;i++)
{
cout << q[i]<< " "<<endl;
}
      }
    }
};

int main()
{ que q;
int ch,val;
while(true)
{
        cout<<"\n\n\nEnter the option\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\n"<<endl;
    cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"enter the value"<<endl;
            cin>>val;
            q.enqu(val);
            break;
            case 2:
            q.dequ();
            break;
            case 3:
            q.disp();
            break;
            case 4:
            exit(0);
        }
    }
}
