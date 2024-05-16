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
void insertion(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
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
    print(head);
    insertion(head, 12);

    print(head);
    insertion(head, 15);
    print(head);
}