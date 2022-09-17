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
void insertail(node *&tail, int data)
{
    node *newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
}
node *marge(node *head1, node *head2)
{
    if (head1 == NULL && head1 == NULL)
        return NULL;
    if (head1 != NULL && head2 == NULL)
        return head1;

    if (head1 == NULL && head2 != NULL)
        return head2;
    node *temp1 = head1;
    node *temp2 = head2;
    node *head = NULL;
    node *reak = head;
    if (temp1->data > temp2->data)
    {
        head = temp2;
        temp2 = temp2->next;
        reak = head;
    }
    else if (temp1->data < temp2->data)
    {
        /* code */
        head = temp1;
        temp1 = temp1->next;
        reak = head;
    }
    else
    {
        head = temp1;
        temp1 = temp1->next;
        reak = head;
        head->next = temp2;
        temp2 = temp2->next;
        head = head->next;
    }

    // cout << "bjar\n";
    // cout << reak->data;

    // print(temp1);
    // print(temp2);
    while (temp1 != NULL && temp2 != NULL)
    {
        // cout << "while under\n";
        if (temp1->data < temp2->data)
        {

            // cout << "ucderwhile temp1\n";
            head->next = temp1;
            head = head->next;
            temp1 = temp1->next;
        }
        else if (temp1->data > temp2->data)
        {

            head->next = temp2;
            head = head->next;
            temp2 = temp2->next;
        }
        else if (temp1->data == temp2->data)
        {
            if (head->next == temp2)
            {
                head = head->next;
                // head = temp2;
                // temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else if (head->next == temp1)
            {
                head = head->next;
                // head = temp1;
                // temp1 = temp1->next;
                temp1 = temp1->next;
            }

            // head->next = temp1;
            // head = head->next;
            // // temp1 = temp1->next;
            // temp2 = temp2->next;
        }
    }
    // cout << "while bhar";
    // cout << reak->data;
    if (temp2 != NULL)
    {
        head->next = temp2;
    }
    else if (temp1 != NULL)
    {
        head->next = temp1;
    }
    return reak;
}
int main()
{
    node *head1 = new node(5);
    node *tail = head1;
    node *head2 = new node(5);
    node *tail1 = head2;

    insertail(tail, 7);
    insertail(tail, 9);
    insertail(tail, 9);
    insertail(tail, 14);
    // insertail(tail, 14);
    // insertail(tail, 17);
    // insertail(tail, 19);
    insertail(tail1, 6);
    insertail(tail1, 9);
    // insertail(tail1, 8);
    insertail(tail1, 12);
    insertail(tail1, 14);
    // insertail(tail1, 18);
    // insertail(tail1, 20);

    print(head1);
    cout << endl;
    print(head2);
    cout << endl;
    node *ans = marge(head1, head2);
    // cout<<"hksjre";
    print(ans);

    return 0;
}