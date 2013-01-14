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
    btree()
    {
        root=NULL;
    }
    void insert(int value)
    {
        node *temp=new node;
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
    {
        node*tmp=root;
        if(tmp==NULL)
            cout<<"empty"<<endl;
        else
            {
                cout<<"preoder"<<endl;
                predisphelper(tmp);
                cout<<endl<<"inorder"<<endl;
                indisphelper(tmp);
                cout<<endl<<"postorder"<<endl;
                postdisphelper(tmp);

            }

    }

    void predisphelper(node *tmp)
    {
        cout<<tmp->data<<" ";
        if(tmp->left!=NULL)
            {
                predisphelper(tmp->left);
            }
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

    void remove(int datatodel)
    {
        node *temp;
        if(temp==NULL)
            cout<<"empty"<<endl;
        else
            {
                removehelper(temp,datatodel);
            }
    }
    void removehelper(node *temp,int datatodel)
    {
        if(temp->data==datatodel)
            {
                if(temp->right==NULL && temp->left==NULL)
                    {
                        delete temp;
                        temp=NULL;
                    }
                if(temp->right==NULL && temp->left!=NULL)
                    {
                        delete temp->left;
                        temp->left=NULL;
                        return;
                    }

                if(temp->right!=NULL && temp->left==NULL)
                    {
                        delete temp->right;
                        temp->right=NULL;
                        return;
                    }
                if(temp->right!=NULL && temp->left!=NULL)
                    {
                        node *temp5=temp->right;
                        while(temp5->left!=NULL)
                            {
                                temp5=temp5->left;
                            }
                        temp->data=temp5->data;
                        temp->right=temp5->right;
                        delete temp5;
                        return;

                    }

            }



        if(temp->data > datatodel && temp->left!=NULL)
            {
                if(temp->left->data==datatodel)
                    {
                        if(temp->left->right==NULL && temp->left->left==NULL)
                            {
                                delete temp->left;
                                temp->left=NULL;
                                return;
                            }
                        if(temp->left->right==NULL && temp->left->left!=NULL)
                            {
                                node *temp3=temp->left->left;
                                delete temp->left;
                                temp->left=temp3;
                                return;
                            }
                        if(temp->left->right!=NULL && temp->left->left==NULL)
                            {
                                node *temp4=temp->left->right;
                                delete temp->left;
                                temp->left=temp4;
                                return;
                            }
                        if(temp->left->right!=NULL && temp->left->left!=NULL)
                            {
                                node *temp5=temp->left;
                                while(temp5->right->right!=NULL)
                                    {
                                        temp5=temp5->right;
                                    }
                                temp->left->data=temp5->right->data;
                                delete temp5->right;
                                temp5->right=NULL;
                            }

                    }
                removehelper(temp->left,datatodel);
            }

        if(temp->data < datatodel && temp->right!=NULL)
            {
                if(temp->right->data==datatodel)
                    {
                        if(temp->right->right==NULL && temp->right->left==NULL)
                            {
                                delete temp->right;
                                temp->right=NULL;
                                return;
                            }
                        if(temp->right->right==NULL && temp->right->left!=NULL)
                            {
                                node *temp3=temp->right->left;
                                delete temp->right;
                                temp->right=temp3;
                                return;
                            }
                        if(temp->right->right!=NULL && temp->right->left==NULL)
                            {
                                node *temp4=temp->right->right;
                                delete temp->right;
                                temp->right=temp4;
                                return;
                            }
                        if(temp->right->right!=NULL && temp->right->left!=NULL)
                            {
                                node *temp5=temp->right;
                                while(temp5->right->right!=NULL)
                                    {
                                        temp5=temp5->right;
                                    }
                                temp->right->data=temp5->right->data;
                                delete temp5->right;
                                temp5->right=NULL;
                            }

                    }
                removehelper(temp->right,datatodel);
            }

    }


};

int main()
{
    btree binarytree;
    binarytree.insert(6);
    binarytree.insert(2);
    binarytree.insert(1);
    binarytree.insert(4);
    binarytree.insert(3);
    binarytree.insert(5);
    binarytree.insert(7);
    binarytree.insert(9);
    binarytree.insert(10);
    binarytree.insert(8);
    binarytree.remove(6);
}
