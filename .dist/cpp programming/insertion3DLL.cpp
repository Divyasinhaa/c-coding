#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    //constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev=NULL;
    }
};
void insertion_at_middle(node *&head, int data,int pos)
{
    if(pos==1){
        insertion_at_middle(head,data,pos);
    }
    node *temp=head;
    int current=1;
    while(current<pos-1){
        temp=temp->next;
        current++;
    }

    node *nodeinsert = new node(data);
    nodeinsert->next=temp->next;
    temp->next=nodeinsert;
}


    void printarr(node* &head){
    node *temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node *node1=new node(2);
    //cout<< node1->data <<endl;
    //cout<< node1->next <<endl;
    node* head=node1;
    printarr(head);
    insertion(head,2,4);
    printarr(head);

}