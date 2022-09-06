#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
void printcircular(node *head)
{
    node *temp = head;
      cout << temp->data << "->";
        temp = temp->next;
    while (temp != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
void insertail(node *&tail, int data)
{
    node *newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
}
node* reversekg(node*&head, int k){
    if (head==NULL)
    {
        cout<<"list is empty\n";
        return NULL;
    }
    node* current=head;
    node*pvs=NULL,*nextss=NULL;
    int temp=k;
    while (current!=NULL&&k>0)
    {
        nextss=current->next;
        current->next=pvs;
        pvs=current;
        current=nextss;
        k--;

    }
    if (current!=NULL)
    {
        head->next=reversekg(nextss,temp);
    }
    
    return pvs;

}
node* circular(node* &head)
{
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    return head;

}
node* detectcircular(node* &head){
    node* temp=head;
    while(temp->next!=NULL){
        if (temp->next==head)
        {
            cout<<"LOOP detect\n";
            temp->next=NULL;
            return head;
        }
        temp=temp->next;
    }

}
int main()
{
    node *head = new node(5);
    node *tail = head;

    insertail(tail, 8);
    insertail(tail, 3);
    insertail(tail, 82);
    insertail(tail, 1);
    insertail(tail, 5);
    insertail(tail, 6);
    insertail(tail, 23);

    // print(head);
    // node*rev=reversekg(head,3);
    cout<<endl;
    // print(rev);
    head=circular(head);
    printcircular(head);
    head=detectcircular(head);
     print(head);
    return 0;
}