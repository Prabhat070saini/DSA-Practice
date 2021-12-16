#include <stdio.h>
#include <stdlib.h>
struct binarytree
{
    int data;
    struct binarytree *left, *right;
};
typedef struct binarytree B;

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
void print(B *root)
{
    if (root != NULL)
    {
        printf("%d->", (root->data));
        print(root->left);
        print(root->right);
    }
}

int main()
{

    B *root = NULL;
    root = createtree();
    printf("Element of binary trees are :");
    print(root);

    return 0;
}