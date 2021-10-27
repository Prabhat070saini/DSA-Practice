#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *pvr;
};
typedef struct node N;
N *doublcreate(int n)
{
    N *head = NULL, *ptr, *temp;
    printf("Enter the value of node\n");
    for (int i = 0; i < n; i++)
    {
        temp = (N *)malloc(sizeof(N));
        scanf("%d", &(temp->data));
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            head->pvr = NULL;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
            temp->pvr = ptr;
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
N *insertnode(N *head, N *insert, int n)
{
    int co = 0,c=0;
    N *ptr = head,*v=head;
    if (n == 0)
    {
        insert->next = head;
        head->pvr = insert;
        return insert;
    }
    else
    {
        while (co != n-1)
        {
            ptr = ptr->next;
            co++;
        }
         while (c != n-1)
        {
            v = v->next;
            c++;
        }
        insert->next=ptr->next;
        v->pvr=insert;
        ptr->next=insert;
        insert->pvr=ptr;
         return head;

    }
   if (head==NULL)
   {
       return insert;
   }
   
}
int main()
{
    N *head = NULL;
    int n;
    printf("Enter the number of node \n");
    scanf("%d", &n);
    head = doublcreate(n);
    print(head);
    int index;
    N *insert;
    insert = (N *)malloc(sizeof(N));
    printf("\ninsert element at starting enter index 0\ninsert element at any index enter those index\ninsert element at last enter index  equal to number of node\n");
    printf("\nEnter the index and value which you want to insert\n");
    scanf("%d %d", &index, &(insert->data));
    insert->next = NULL;
    insert->pvr = NULL;
    head = insertnode(head, insert, index);
    print(head);
    return 0;
}