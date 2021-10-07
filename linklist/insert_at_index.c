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
    N *head = NULL, *t = NULL, *p = NULL;
    printf("Enter the value of node\n");
    for (int i = 0; i < n; i++)
    {
        t = (N *)malloc(sizeof(N));
        scanf("%d", &(t->data));
        t->next = NULL;
        if (head == NULL)
        {
            head = t;
        }
        else
        {
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = t;
        }
    }
    return head;
}
void print(N *head)
{
    N *ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
}
N *insertindex(N *head, N *insert, int index)
{
    N *p;
    int co = 0;
    p = head;
   
    while (co != index - 1)
    {
        p = p->next;
        co++;
    }
    
    insert->next = p->next;
   p->next = insert;
    return head;
}
int main()
{
    N *head, *insert = NULL;
    int index;
    printf("Enter the no of node\n");
    int n;
    scanf("%d", &n);
    head = input(n);
    print(head);
    printf("\n");
    insert=(N*)malloc(sizeof(N));
    printf("Enter the value which you want to insert and\nEnter the index\naccept 0 and last\n");
    scanf("%d %d", &(insert->data), &index);
    head = insertindex(head, insert, index);
    print(head);
    return 0;
}