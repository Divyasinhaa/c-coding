#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
    //constructor
    
};
void insertion(struct node * head)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->next = head;
    head = temp;
}
void print(struct node*temp)
{
    
    
    while (temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    
}
int main()
{
    //struct node *node1;

    // cout<< node1->data <<endl;
    // cout<< node1->next <<endl;

    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->next=NULL;
    
    print(head);
    insertion(head, 12);

    print(head);
    insertion(head, 15);
    print(head);

    //insertion_at_middle(head,10,5);
    //print(head);
}
