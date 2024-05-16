#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    //constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void deletion(node *&head, int pos)
{
    if(pos==1){
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
    }
    node *current=head;
    node *prev=NULL;
    int cut=1;
    while(cut<pos){
        prev=current;
        current=current->next;
        cut++;
    }
    prev->next=current->next;
    current->next=NULL;
    free(current);
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *node1 = new node(20);

    // cout<< node1->data <<endl;
    // cout<< node1->next <<endl;

    node *head = node1;
    

    deletion(head,1);
    print(head);
}