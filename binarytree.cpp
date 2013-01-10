#include<iostream>
#include<cassert>
using namespace std;

class node
{
  public:
  int data;
  node *left,*right;
};

class btree
{
private:
node *root;
public:
btree(){root=NULL;}
void insert(int value)
{
    if(root == NULL)
        {node *temp=new node;
        temp->right=NULL;
        temp->data=value;
        temp->left=NULL;
        root=temp;
        }
    else
        insertHelper(root, value);
}

void insertHelper(node* Node, int value)
{
    if(value < Node->data)
    {
        if(Node->left == NULL)
            {
                Node->left=new node;
                Node->data=value;}
        else
            insertHelper(Node->left, value);
    }
    else
    {
        if(Node->right== NULL)
           {
               Node->right = new node;
               Node->data=value;}
        else
            insertHelper(Node->right, value);
    }
}


void disp()
{node*tmp=root;
if(tmp==NULL)
cout<<"empty"<<endl;
else{
    cout<<tmp->data<<endl;
    while(tmp->left!=NULL)
    {
        cout<<tmp->data<<endl;
        tmp=tmp->left;}
    while(tmp->right!=NULL)
    {
       cout<<tmp->data<<endl;
        tmp=tmp->right;
    }}
}

};

int main()
{
    btree binarytree;
    binarytree.insert(10);
    binarytree.insert(5);
    binarytree.insert(30);
    binarytree.disp();
}
