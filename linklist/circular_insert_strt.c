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
    N *head = NULL, *temp = NULL, *ptr = NULL;
    printf("Enter the value of node\n");

    for (int i = 0; i < n; i++)
    {
        temp = (N *)malloc(sizeof(N));
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
    temp->next=head;

    return head;
}
void output(N *head)
{
    N *p;
    p = head;
    printf("%d->",p->data);
    p = p->next;

    while (p != head)
    {
        printf("%d->", (p->data));
        p = p->next;
    }
}
N *insertelement(N *head, N *insert,int n)
{
    int co=1;

    if (head == NULL)
    {
        insert->next = NULL;
        return head = insert;
    }
    else
    {
        insert->next = head;
        while (co!=n)
        {
            head=head->next;
            co++;
        }
        head->next=insert;
        

        return insert;
    }
}

int main()
{
    N *head;
    N *insert = NULL;
    int n;
    printf("Enter the no of node\n");
    scanf("%d", &n);
    head = input(n);
    output(head);
    printf("\n");
    insert = (N *)malloc(sizeof(N));
    printf("Enter the value of insert data\n");
    scanf("%d", &(insert->data));
    head = insertelement(head, insert,n);
    output(head);

    return 0;
}