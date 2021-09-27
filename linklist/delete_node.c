#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node N;
N *input(int n)
{
    N *head =NULL,*t=NULL,*p=NULL;
    printf("Enetr the data of node\n");
    for (int  i = 0; i < n; i++)
    {
        t=(N*)malloc(sizeof(N));
        scanf("%d",&(t->data));
        t->next=NULL;
        if (head==NULL)
        {
            head=t; 
        }
        else
        {
            p=head;
            while (p->next!=NULL)
            {
                p=p->next;
            }
            p->next=t;
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
N *deletion(N *head,int n)
{
    N *p,*v,*ptr;
    int co=0,c=0;
    p=head;
    v=head;
    ptr=head;
    if (n==0)
    {
     head=head->next;
     free(ptr);
      return head;
    }
    else
    {
    
    while (co!=n-1)
    {
       p=p->next;
       co++;
    }
    while (c!=n)
    {
       v=v->next;
       c++;
    }
    p->next=v->next;
    free(v);

    return head;
    }
}

int main(){
N *head;
int n;
printf("Enter the no of node\n");
scanf("%d",&n);
head=input(n);
print(head);
printf("\n");
int indx;
printf("Enetr the index number which you want to delet\n");
scanf("%d",&indx);
head=deletion(head,indx);
print(head);
 return 0;
}