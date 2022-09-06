// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
/* https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1


#include <iostream>
#include <cstdlib>
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
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
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
node *combain(node *&head1, node *head2)
{
    node *temp = head2;
    node *temp1 = head1;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    int k = 3;
    while (k-- > 0)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1;
    return head2;
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
int intersectionpoint(node *&head1, node *&head2)
{
    // Your Code Here

    node *temp1 = head1;
    node *temp2 = head2;
    temp1 = reversekg(head1);
    temp2 = reversekg(head2);
    // print(temp2);
    print(temp1);
    cout << endl;
    print(temp2);
    node *ans = NULL;
    int flag = 1;
    while (temp1 == temp2)
    {
        ans = temp2;
        flag = 0;

        temp2 = temp2->next;
        temp1 = temp1->next;
    }
    if (flag = 0)
    {
        return ans->data;
    }
    else
    {
        return -1;
    }

    // temp2=temp2->next;
}
int intersectionpoint2(node *head1, node *head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    int len1 = countlengt(temp1);
    int len2 = countlengt(temp2);
    int d = abs(len1 - len2);
    if (len1 > len2)
    {
        // cout << "L!";
        while (d--)
        {
            temp1 = temp1->next;
        }
    }
    else if (len1 < len2)
    {
        while (d--)
        {
            temp1 = temp1->next;
        }
    }
    int flag = 1;
    while (temp1 != temp2)
    {
        // cout << "\nwhile\n";
        temp1 = temp1->next;
        temp2 = temp2->next;
        flag = 0;
    }
    
    // cout<<"\nflag"<<flag<<endl;

    if (flag == 0)
    {
        // cout<<"data"<<temp1->data<<endl;
        return temp1->data;
    }
    else
    {
        return -1;
    }
}

int main()
{
    node *head1 = new node(1);
    node *tail = head1;
    node *head2 = new node(3);
    node *tail2 = head2;
    insertail(tail2, 10);

    insertail(tail, 2);
    insertail(tail, 3);
    insertail(tail, 4);
    insertail(tail, 5);
    insertail(tail, 6);
    head2 = combain(head1, head2);
    print(head1);
    cout << endl;
    print(head2);
    int k = intersectionpoint2(head1, head2);
    cout << "\nk" << k;

    return 0;
}
*/
