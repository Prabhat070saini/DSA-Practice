#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node N;
N *input(int n)
{
    N *head = NULL;
    N *temp = NULL;
    N *ptr = NULL;
    for (int i = 0; i < n; i++)
    {

        //indivisual node
        temp = (N *)malloc(sizeof(N));
        printf("Enter the element of linklist %d\n", i + 1);
        scanf("%d", &(temp->data));
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }
    temp->next = head;
    return head;
}
void print(N *head)
{
    N *p;
    p = head;
    printf("%d->", p->data);
    p = p->next;
    while (p != head)
    {
        printf("%d->", (p->data));
        p = p->next;
    }
}

N *insert_end(N *head, N *insert, int indx)
{
    N *ptr = NULL;
    ptr=head;
    int i=0;
    while(i!=indx-1)
    {
        ptr=ptr->next;
        i++;
    }
    insert->next=ptr->next;
    ptr->next=insert;
    return head;
}
int main()
{
    N *Head = NULL, *insert = NULL;
    int n;
    printf("Enter the number of nodes\n");
    scanf("%d", &n);
    Head = input(n);
    print(Head);
    insert = (N *)malloc(sizeof(N));
    printf("Enetr the value of data which you want to insert\n");
    scanf("%d", &(insert->data));
    int indx;
    printf("Eneter the indx\n");
    scanf("%d",&indx);
    Head = insert_end(Head, insert,indx);
    print(Head);
    return 0;
}