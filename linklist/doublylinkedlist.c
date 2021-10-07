#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prvs;
};
typedef struct node N;
N *createdoubly(int n)
{
    N *head = NULL, *ptr = NULL, *temp = NULL;
    printf("Enetr the value data of node\n");
    for (int i = 0; i < n; i++)
    {
        temp = (N *)malloc(sizeof(N));
        scanf("%d", (temp->data));
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            head->prvs = NULL;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
            temp->prvs = ptr;
        }
    }
    return head;
}
void print(N *head)
{
    N *p;
    p = head;
    while (p != NULL)
    {
        printf("%d->", (p->data));
        p = p->next;
    }
}
int main()
{
    N *head = NULL;
    int n;
    printf("Enter the number of node \n");
    scanf("%d", &n);
    head = createdoubly(n);
    print(head);
    return 0;
}