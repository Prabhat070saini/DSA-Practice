#include <stdio.h>
#include <stdlib.h>
struct binarytree
{
    int data;
    struct binarytree *left, *right;
};
typedef struct binarytree B;
// B *Createroot(int data)
// {
//     B *root = NULL;
//     root =(B*)malloc(sizeof(B));
//     root->data = data;
//     root->left = NULL;
//     root->right = NULL;
//     return root;
// }
B *createtree()
{
    B *temp;
    int data;
    printf("Enter the node data\n");
    scanf("%d", &data);
    if (data == -1)
        return NULL;
    temp = (B *)malloc(sizeof(B));
    temp->data = data;
    temp->left = createtree();
    temp->right = createtree();
    return temp;
}
void preorder(B *root)
{
    if (root != NULL)
    {
        printf("%d", (root->data));
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{

    B *root = NULL;
    root = createtree();
    preorder(root);

    return 0;
}