#include <stdio.h>
#include <stdlib.h>
struct binarytree
{
    int data;
    struct binarytree *left, *right;
};
typedef struct binarytree B;
// int height(B *root)
// {
//     if (root == NULL)
//     {
//         return - 1;
//     }
//     else if (root->left == NULL && root->right == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         int lft = height(root->left);
//         int rit = height(root->right);
//         if (lft > rit)
//         {
//             return lft + 1;
//         }
//         else

//         {
//             return rit + 1;
//         }
//     }
// }
B *createtree()
{
    B *temp;
    int data;
    printf("Enter node data(-1 for no data)\n");
    scanf("%d", &data);

    if (data == -1)
        return NULL;
    temp = (B *)malloc(sizeof(B));
    temp->data = data;
    printf("Enter left child for %d\n", data);
    temp->left = createtree();
    printf("Enter Right child for %d\n", data);
    temp->right = createtree();
    return temp;
}
void printpost(B *root)
{

    if (root != NULL)
    {

        printpost(root->left);

        printpost(root->right);
        printf("%d->", (root->data));
    }
}
void printpre(B *root)
{

    if (root != NULL)
    {
        printf("%d->", (root->data));

        printpre(root->left);

        printpre(root->right);
    }
}
void printin(B *root)
{

    if (root != NULL)
    {

        printin(root->left);
        printf("%d->", (root->data));
        printin(root->right);
    }
}

int main()
{

    B *root = NULL;
    root = createtree();
   printf("IN :");
    printin(root);
    // deletenode(root, 7);
    printf("\nPOST :");
    
    printpost(root);
     printf("\nPre :");
    printpre(root);

    return 0;
}