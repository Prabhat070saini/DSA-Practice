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
int countlengt(node *head)
{
    node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
void insertail(node *&tail, int data)
{
    node *newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
}
node *reversekg(node *head)
{
    if (head == NULL)
    {
        cout << "list is empty\n";
        return NULL;
    }
    node *current = head;
    node *pvs = NULL, *nextss = NULL;
    // int temp = k;
    while (current != NULL)
    {
        nextss = current->next;
        current->next = pvs;
        pvs = current;
        current = nextss;
    }

    return pvs;
}
bool palindrom(node *&head, int length)
{
    node *head1 = head;
    node *head2 = head;
    node *temp = head;
    
    if (length % 2 != 0)
    {
        // cout<<"checl";
        length = length / 2;
        while (length > 0)
        {
            temp = temp->next;
            length--;
        }
        head2 = reversekg(temp->next);
        // print(head2);
    }else{
        length = (length / 2)-1;
        while (length > 0)
        {
            temp = temp->next;
            length--;
        }
        head2 = reversekg(temp->next);
        // print(head2);

    }
    while (head2!=NULL)
    {
       if (head1->data!=head2->data&&head1!=NULL&&head2!=NULL)
       {
        return 0;
       }
       head1=head1->next;
       head2=head2->next;
    }
    return 1;
    
}

int main()
{
    node *head = new node(1);
    node *tail = head;

    insertail(tail, 2);
    insertail(tail, 3);
    insertail(tail, 3);
    insertail(tail, 2);
    insertail(tail, 1);
    // insertail(tail, 5);
    // insertail(tail, 6);
    // insertail(tail, 23);

    print(head);
    node *hreal = head;
    int length = countlengt(hreal);
    
    // node*rev=reversekg(head,3);
    // cout<<endl;
    // print(rev);
    // cout<<endl<<hreal->next<<endl;

    // cout << "\n length" << length;
    cout<<endl;
   int pal= palindrom(head,length);
   cout<<pal;
    return 0;
}