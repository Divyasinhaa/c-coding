#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    //constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev=NULL;
    }
};


void print(node *&tail)
{
    node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertionattail(node *&tail,int d){
    node *temp=new node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
}


int main()
{
    node *node1 = new node(20);

    // cout<< node1->data <<endl;
    // cout<< node1->next <<endl;

    node *tail = node1;
    node *head=node1;
    print(head);
    

    
    insertionattail(tail,12);
    print(tail);
    

   
    
}