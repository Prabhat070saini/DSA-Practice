#include <stdio.h>
#include <stdlib.h>
struct node
{
    int r, c, v;
    struct node *next;
};
typedef struct node N;
void print(N *head)
{
    N *ptr = head;
    while (ptr != NULL)
    {
        printf("row->%d", (ptr->r));
        printf("column->%d ", (ptr->c));
        printf("value->%d\n", (ptr->v));
        ptr = ptr->next;
    }
}
int main()
{
    int r, c, size = 0;
    printf("Enter the no of row and columnn\n");
    scanf("%d%d", &r, &c);
    int sparsmatrix[r][c];
    printf("Enter the element of matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &sparsmatrix[i][j]);
            if (sparsmatrix[i][j] != 0)
                size++;
        }
    }
    printf("Sparse matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", sparsmatrix[i][j]);
        }
        printf("\n");
    }
        N *head=NULL,*ptr=NULL,*T=NULL;

        for (int  i = 0; i < r; i++)
        {
                    for (int j = 0; j < c; j++)
                    {
                       
                        if (sparsmatrix[i][j]!=0)
                        {
                             ptr=(N*)malloc(sizeof(N));
                            ptr->r=i;
                            ptr->c=j;
                            ptr->v=sparsmatrix[i][j];
                            ptr->next=NULL;
                        }
                        if (head==NULL)
                        {
                            head=ptr;
                        }
                        else
                        {
                            T=head;
                            while (T->next!=NULL)
                            {
                               T=T->next;
                            }
                            T->next=ptr;

                        }
                        
                    }
                    
        }
         printf("compact linked list\n");
        print(head);
        
    return 0;
}