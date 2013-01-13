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
{node *temp=new node;
    if(root == NULL)
        {
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
                Node->left->data=value;
                Node->left->left=NULL;
                Node->left->right=NULL;
                }
        else
            insertHelper(Node->left, value);
    }
    else
    {
        if(Node->right== NULL)
           {
               Node->right = new node;
               Node->right->data=value;
               Node->right->left=NULL;
               Node->right->right=NULL;
               }
        else
            insertHelper(Node->right, value);
    }

}

void disp()
{node*tmp=root;
if(tmp==NULL)
    cout<<"empty"<<endl;
else
    {   cout<<"preoder"<<endl;
        predisphelper(tmp);
        cout<<endl<<"inorder"<<endl;
        indisphelper(tmp);
        cout<<endl<<"postorder"<<endl;
        postdisphelper(tmp);

    }
}

void predisphelper(node *tmp)
{cout<<tmp->data<<" ";
    if(tmp->left!=NULL)
    {
        predisphelper(tmp->left);}
    if(tmp->right!=NULL)
    {

        predisphelper(tmp->right);
    }
}



void postdisphelper(node *tmp)
{
    if(tmp->left!=NULL)
    {
        postdisphelper(tmp->left);
        }
    if(tmp->right!=NULL)
    {

        postdisphelper(tmp->right);

    }
cout<<tmp->data<<" ";
}



void indisphelper(node *tmp)
{
    if(tmp->left!=NULL)
    {
        indisphelper(tmp->left);
    }
cout<<tmp->data<<" ";
    if(tmp->right!=NULL)
    {
        indisphelper(tmp->right);

    }

}

};

int main()
{
    btree binarytree;
    binarytree.disp();
    binarytree.insert(6);
    binarytree.insert(2);
    binarytree.insert(1);
    binarytree.insert(4);
    binarytree.insert(3);
    binarytree.insert(5);
    binarytree.insert(7);
    binarytree.insert(9);
    binarytree.insert(8);
    binarytree.disp();
}
