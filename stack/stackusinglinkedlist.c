#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node N;
N *push(N *head, N *insert)
{

    if (head == NULL)
    {
        insert->next = NULL;
        return head = insert;
    }
    else
    {
        insert->next = head;

        return insert;
    }
}
N *pop(N *top)
{
    // printf("\ntop=%d\n", (top->data));
    if (top == NULL)
    {
        printf("Under flow\n");
    }
    else
    {
        printf("\nPOP");
        top = top->next;
    }
}
void pick(N *top)
{
    printf("\nTop element of stack is :%d", (top->data));
}
void output(N *head)
{
    N *p;
    p = head;
    printf("Present stack is :");
    while (p != NULL)
    {
        printf("%d->", (p->data));
        p = p->next;
    }
}
N *inputdata(N *insert)
{
    insert = (N *)malloc(sizeof(N));
    printf("\nEnter the push element\n");
    scanf("%d", &(insert->data));
    insert->next = NULL;
    return insert;
}
void isempty(N *top)
{
    if (top == NULL)
    {
        printf("\nstack is empty\n");
    }
}
int main()
{
    N *top = NULL, *insert = NULL;
    insert = inputdata(insert);
    top = push(top, insert);
    output(top);
    insert = inputdata(insert);
    top = push(top, insert);
    output(top);
    top = pop(top);
    insert = inputdata(insert);
    top = push(top, insert);
    output(top);
    pick(top);
    top = pop(top);
    pick(top);
    top = pop(top);
    isempty(top);

    return 0;
}