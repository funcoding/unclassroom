//queue implementation
#include<iostream>
using namespace std;

int main()
{

int ch,tail,head,del,el1;
cout<<"enter the Queue size"<<endl;
cin>>tail;
tail=tail+1; //incrementing by 1 for enqueue operation
int q[tail];
for(int count=1;count<tail;count++)
{
    cout<<count<<" ";
}
cout<<endl;
cout<<"Enter the starting index of queue"<<endl;
cin>>head;

cout<<"Enter the Queue elements"<<endl;

    for(int y=head-1;y<tail-1;y++)
    {
        cin>>q[y];
    }
if(head!=1)
{
    for(int i1=0;i1<head-1;i1++)
    {
        q[i1]=0;
    }
}
head=head-1;
while(true)
    {cout<<"Enter yout choice"<<endl;
    cout<<"1.Add Element(Enqueue)"<<endl;
    cout<<"2.Delete (Dequeue)"<<endl;
    cout<<"3. Display"<<endl;
    cin>>ch;

    switch(ch)
    {
        case 1:
        if(head==tail+1)
        cout<<"Queue is full"<<endl;
        else
        {
        cout<<"enter the element"<<endl;
        cin>>el1;
        q[tail-1]=el1;
        if(tail==sizeof(q)/sizeof(*q))
        {
            tail=1;
        }
        else
        tail+=1;}
        break;


        case 2:
        if(q[head]==q[tail])
        {
            cout<<"empty"<<endl;
        }
        else
        {
        del=q[head];
        if(head==sizeof(q)/sizeof(*q))
        {head=0;
        }
        else
        {
        head+=1;

        }
        cout<<"deleted "<<del<<endl;}
        break;

        case 3:
        for(int i=0;i<sizeof(q)/sizeof(int);i++)
        {
            cout<<q[i]<<endl;;
        }
        break;
    }}


}

