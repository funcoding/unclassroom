#include<iostream>
#include<cassert>
#include<stdlib.h>
using namespace std;

class node
{
public:
  int data;
  node *link;

};

class linkedlist
{  node *head;
public:
linkedlist()
{
   head=NULL;
}
    int add(int data1)
    { node *insertnode=new node;
        insertnode->data=data1;
        insertnode->link=NULL;

        node *temp=head;

        if(temp!=NULL)
        {
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=insertnode;

        }
        else{head=insertnode;}


        return 1;

    }
    void disp()
    { node *temp1=head;
    cout<<endl;
    if(temp1==NULL)
    {cout<<"Empty"<<endl;
    }
    if(temp1->link==NULL)
    {
        cout<<temp1->data<<endl;

    }
    else{
    do{cout<<temp1->data<<endl;
    temp1=temp1->link;
    }
    while(temp1!=NULL);
    }

    }


    int remove(int removedata)
    {
        if(head==NULL)
        cout<<"empty"<<endl;
        node *current=head;
        if(current->data==removedata)
        {
        head=current->link;
        delete current;
        return -1;
        }
        while(current->link)
        {
            if(current->link->data==removedata)
            {
                node *temp2=current->link;
                current->link=temp2->link;
                delete temp2;
                


            }
            current=current->link;
        }
        return -1;

    }



};

int main()
{
    linkedlist list;
    assert(list.add(10)==1);
    assert(list.add(100)==1);
    assert(list.add(200)==1);
    assert(list.remove(10)==-1);

    }
