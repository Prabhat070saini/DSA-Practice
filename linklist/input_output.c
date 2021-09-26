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
        printf("Enter the element of linklist %d\n", i+1);
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
    N *p;
    p=head;
    while (p!=NULL)
    {
        printf("%d->",(p->data));
        p=p->next;
    }
    
}
int main()
{
    N *Head = NULL;
    int n;
    printf("Enter the number of nodes\n");
    scanf("%d", &n);
    Head=input(n);
    print(Head);
    return 0;
}