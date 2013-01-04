#include<iostream>
#include<cassert>
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
}
