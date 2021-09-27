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
    N *p,*v;
    int co=0;
    p=head;
    v=head;
    
    while (p->data!=n)
    {
         co++;
       
       p=p->next;
      
    }
 
    for (int i = 0; i < co-1; i++)
    {
        v=v->next;
    }
    v->next=p->next;
    free(p);
    if (co==0)
    {
         head=head->next;
         free(p);
         free(v);
         return head;

    }
    
    return head;
}

int main(){
N *head;
int n;
printf("Enter the no of node\n");
scanf("%d",&n);
head=input(n);
print(head);
printf("\n");
int value;
printf("Enetr the value number which you want to delet\n");
scanf("%d",&value);
head=deletion(head,value);
print(head);
 return 0;
}