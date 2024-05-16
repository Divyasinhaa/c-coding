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
void insertion(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp= tail;
}
    void printarr(node* &tail){
    node *temp=tail;
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
    node* tail=node1;
    printarr(tail);
    insertion(tail,4);
    printarr(tail);

}