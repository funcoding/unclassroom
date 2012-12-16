

#include<iostream>
#include<stdlib.h>
using namespace std;
class queue
{
   int q[5],head,tail;
   public:
      queue()
      {
	 head=-1;
	 tail=-1;
      }
      void enque(int x)
      {
	 if(head ==-1 && tail == -1)
	 {
	   q[++tail]=x;
	   head=tail;
	   return;
	 }
	 else if(head == (tail+1)%5 )
	 {
	    cout <<" Circular Queue over flow";
	    return;
	 }
	 tail= (tail+1)%5;
	 q[tail]=x;
     }

     void deque()
     {
	if(head==-1 && tail==-1)
	{
	  cout <<"under flow";
	  return;
	}
	else if( head== tail  )
	{
	  head=tail=-1;
	  return;
	}
	head= (head+1)%5;
     }




 void display()
    {
      int i;
      if( head <= tail)
      {
	for(i=head; i<=tail;i++)
	cout << q[i]<<" ";
      }
      else
      {
	 for(i=head;i<=4;i++)
	 {
	   cout <<q[i] << " ";
	 }
	 for(i=0;i<=tail;i++)
	 {
	    cout << q[i]<< " ";
	 }
      }
    }
};

main()
{

int ch;
queue q1;
while(true)
{
cout<<"\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\nEnter ur choice";
cin >> ch;
switch(ch)
{
    case 1: cout<<"enter element";
	cin >> ch;
	q1.enque(ch);
	break;
    case 2: q1.deque();
    break;
    case 3: q1.display();
    break;
    case 4:
    exit(0);
}
}
}
