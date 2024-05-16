#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
    //constructor
    node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf( "%d" , temp->data );
        temp = temp->next;
    }
    printf("%d"," ");
}
void insertionathead(node *&head,int d){
    node *temp=new node(d);
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
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
    cout<< node1->data <<endl;
    cout<< node1->next <<endl;
    node *head = node1;
    print(head);
    insertionathead(head,5);
    print(head);
    insertionattail(,12);
    print(tail);
}