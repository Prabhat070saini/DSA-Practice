#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node N;
N *createlinkedlist(int n)
{
    N *ptr = NULL, *temp = NULL, *head = NULL;
    printf("Enter the linkedlist\n");
    for (int i = 0; i < n; i++)
    {
        temp = (N*)malloc(sizeof(N));
        scanf("%d", &(temp->data));
        temp->next=NULL;
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
            ptr->next= temp;
        }
    }
    return head;
}
void print(N *head)
{
    N *temp = head;
    while (temp != NULL)
    {
        printf("%d", (temp->data));
       temp= temp->next;
    }
    
}
N *revsre(N *head)
{
    N *temp=NULL,*prv=NULL,*current=head;
    while(current!=NULL)
    {
        temp=current->next;
        current->next=prv;
        prv=current;
        current=temp;
    }
    return prv;
}
int main()
{
    int n;
    printf("Eneter the number of  node\n");
    scanf("%d", &n);
    N *head=NULL;
    head =createlinkedlist(n);
    print(head);
    printf("\n");
    head=revsre(head);
    print(head);

    return 0;
}