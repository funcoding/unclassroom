#include<iostream>
#include<cassert>
using namespace std;

class node {
  private:
    int data1;
    node *next1;
  public:
     node() {
    };
    int assign(int data) {
	data1 = data;
	return data1;
    }
    void pointer(node * next) {
	next1 = next;
    }
    node *next() {
	return next1;
    }
};

class link {
    node *head;

  public:
     link() {
	head = NULL;
    } int append(int num) {
	node *newnode = new node();
	newnode->assign(num);
	newnode->pointer(NULL);

	node *tmp = head;

	if (tmp != NULL) {
	    while (tmp->next() != NULL) {

		tmp = tmp->next();
	    }

	    tmp->pointer(newnode);
	} else {
	    head = newnode;
	}
    }

};



int main()
{
    link List;

    assert(List.append(100));

}
