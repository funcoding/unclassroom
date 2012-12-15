//stack implementation
#include<iostream>
using namespace std;

int add(int *s,int top)
{ int n1;

    cout<<"enter the element to be added"<<endl;
    cin>>n1;
    top=top+1;

    s[top]=n1;
    cout<<"new array is"<<endl;
     for(int q=0;q<=top;q++)
    {
        cout<<s[q]<<" ";
    }
}

int del(int *s, int topd)
{
    if(topd==-1)
        cout<<"Underflow"<<endl;
    else
    {
        topd=topd-1;
        cout<<"the popped element is "<<s[topd+1];
    }

}

int main()
{ int ch,siz;
cout<<"enter the array size"<<endl;
cin>>siz;
int s[siz];
cout<<"Enter the array elements"<<endl;
for(int h=0;h<siz;h++)
{
    cin>>s[h];
}
    cout<<"Enter yout choice"<<endl;
    cout<<"1.Add Element(push)"<<endl;
    cout<<"2.Delete (pop)"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        add(s,siz-1);
        break;
        case 2:
        del(s,siz-1);
        break;
    }


}
