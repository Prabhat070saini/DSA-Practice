#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coff, power;
    struct node *next;
};
typedef struct node N;
N *create_poly(int highest_power)
{
    N *head = NULL, *ptr = NULL, *temp = NULL;
    printf("Enetr coefficient and power\n");
    for (int i = 0; i <= highest_power; i++)
    {
        temp = (N *)malloc(sizeof(N));
        scanf("%d %d", &(temp->coff), &(temp->power));
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
N *print(N *head)
{
    N *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%dx^%d", (ptr->coff), (ptr->power));
        if (ptr->power)
        {
            printf("+");
        }

        ptr = ptr->next;
    }
}
N *addition_poly(N *poly1, N *poly2,int power)
{
    N *poly = NULL, *temp = NULL, *ptr = NULL;

   for (int  i = 0; i <=power; i++)
   {
       
        temp = (N *)malloc(sizeof(N));
        if (poly1->power > poly2->power)
        {
            
            temp->power = poly1->power;
            temp->coff = poly1->coff;
            temp->next=NULL;
            poly1=poly1->next;
            // printf("%d %d",(temp->coff),(temp->power));
           //  printf("jjsjwsj");
        }
        else if (poly1->power < poly2->power)
        {
           //  printf("right");
            temp->power = poly2->power;
            temp->coff = poly2->coff;
            temp->next = NULL;
            poly2 = poly2->next;
           // printf("%d %d",(temp->coff),(temp->power));
        }
        else if(poly1->power==poly2->power)
        {
           //  printf("equal");
            temp->power = poly1->power;
            temp->coff = poly1->coff + poly2->coff;
            poly1 = poly1->next;
            poly2 = poly2->next;
            temp->next = NULL;
             //printf("%d %d",(temp->coff),(temp->power));
        }
        if (poly == NULL)
        {
             
            poly = temp;
        }
        else
        {
             
            ptr = poly;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
   }
   
    return poly;
}
int main()
{
    int highest_power1, highest_power2,power;
    N *poly1 = NULL, *poly2 = NULL, *poly = NULL;
    printf("Eneter the highest power of polynomial 1\n");
    scanf("%d", &highest_power1);
    poly1 = create_poly(highest_power1);
    print(poly1);
    printf("\nEneter the highest power of polynomial 2\n");
    scanf("%d", &highest_power2);
    poly2 = create_poly(highest_power2);
    print(poly2);
    printf("\n");
    if (highest_power1>highest_power2)
    {
        power=highest_power1;
    }
    else
    {
        power=highest_power2;
    }
    
    poly = addition_poly(poly1, poly2,power);
    printf("ADDITION = ");
    print(poly);
    return 0;
}