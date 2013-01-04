#include<iostream>
#include<cassert>
#include<stdlib.h>
using namespace std;

class node
{
    public:
    int data;
    node *head;
    node *tail;
};

class doublelinkedlist
{ private:
    node *current;
  public:
    doublelinkedlist()
    {
        current=NULL;
    }

  int add(int element)
  {
      node *newnode=new node;
      newnode->data=element;
      newnode->head=NULL;
      newnode->tail=NULL;

      node *temp=current;
      if(temp!=NULL)
      {
          while(temp->head!=NULL)
          {
              temp=temp->head;
          }
          temp->head=newnode;
          temp->head->tail=temp;
      }

      else
      {current=newnode;}

        return 1;

  }
  void disp()
  {node *temp2=current;
  cout<<endl;

      if(temp2==NULL)
      {cout<<"empty"<<endl;
      return;}

    if(temp2->head==NULL)
    {
        cout<<temp2->data<<endl;
        return;
    }

      else
      {while(temp2!=NULL)

          {
              cout<<temp2->data<<endl;

          temp2=temp2->head;


        }
        }
    node *temp3=current;
    node *temp4;

     while(temp3!=NULL)
     {

         if(temp3->head==NULL)
         {
             temp4=temp3;
             while(temp4!=NULL)
             {
                 cout<<temp4->data<<endl;
                 temp4=temp4->tail;
             }

         }

         temp3=temp3->head;

        }


      }
 int remove(int deletedata)
 { node *temp5=current;
	 if(temp5->data==deletedata)
	 {
		 temp5->head->tail=NULL;
		 current=temp5->head;
	 delete temp5;
	 return -1;
		 }
	 
	 while(temp5!=NULL)
	 {if(temp5->head->data==deletedata)
	 {node *temp6=temp5->head;
	 temp5->head=temp6->head;
	 if(temp6->head==NULL)
	 {return -1;}
	 else
	 {temp6->head->tail=temp6->tail;}
	 delete temp6;
	 return -1;
		 }
		  
	 temp5=temp5->head;
		 }
		  
	 
		
	 return -1;
	 }


};

int main()
{
    doublelinkedlist dll;
    dll.disp();
    assert(dll.add(10)==1);
    dll.disp();
    assert(dll.add(100)==1);
    dll.disp();
    assert(dll.add(200)==1);
    dll.disp();
    assert(dll.remove(200)==-1);
    dll.disp();
}
