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
    printf("Enter the value of nodes\n");
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
N *insertlast(N *head, N *insert)
{
    N *ptr;
    if (head == NULL)
    {
        insert->next=NULL;
        return head = insert;
    }
    else
    {
        ptr=head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = insert;
        insert->next = NULL;
         return head;
    }
   
}
int main()
{
    N *head;
    N *insert = NULL;
    int n;
    printf("Enter the number of node\n");
    scanf("%d", &n);
    head = input(n);
    print(head);
    printf("\n");

    insert = (N *)malloc(sizeof(n));
    printf("Enter the value which you want to insert\n");
    scanf("%d", &(insert->data));
    // insert->next = NULL;
     head = insertlast(head, insert);
    print(head);

    return 0;
}