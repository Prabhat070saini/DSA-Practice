/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
    int height;
};
typedef struct node n;
n *newnode(int x)
{
    n *p = (n *)malloc(sizeof(n));
    p->key = x;
    p->left = NULL;
    p->right = NULL;
    p->height = 1;
    return p;
}
int getheight(n *root)
{
    if (root == NULL)
        return 0;
    return root->height;
}
int getblancefactor(n *node)
{
    if (node == NULL)
        return 0;
    return getheight(node->left) - getheight(node->right);
}
n *leftrotation(n *x)
{
    n *y = x->right;
    n *t2 = y->left;
    y->left = x;
    x->right = t2;
     x->height = max(getheight(x->right), getheight(x->left)) + 1;
    y->height = max(getheight(y->right), getheight(y->left)) + 1;
   
    return y;
}
n *rightrotation(n *y)
{
    n *x = y->left;
    n *t2 = x->right;

    x->right = y;
    y->left = t2;
    y->height = max(getheight(y->right), getheight(y->left)) + 1;
    x->height = max(getheight(x->right), getheight(x->left)) + 1;
    return x;
}
n *insertbst(n *root, int key)
{
    if (root == NULL)
    {
        return newnode(key);
    }
    if (key < root->key)
    {
        root->left = insertbst(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = insertbst(root->right, key);
    }
    root->height = 1 + max(getheight(root->left), getheight(root->right));

    int bf = getblancefactor(root);
    // ll
    if (bf > 1 && key < root->left->key)
    {
        return rightrotation(root);
    }
    // rr
    if (bf < -1 && key > root->right->key)
    {
        return leftrotation(root);
    }
    // lr
    if (bf > 1 && key > root->left->key)
    {
        root->left = leftrotation(root->left);
        return rightrotation(root);
    }
    // rl
    if (bf < -1 && key < root->right->key)
    {
        root->right = rightrotation(root->right);
        return leftrotation(root);
    }
    return root;
}
void print(n *root)
{
    if (root != NULL)
    {

        printf("%d->", (root->key));
        print(root->left);

        print(root->right);
    }
}
int main()
{
    n *root = NULL;
      root=newnode(14);

        insertbst(root, 17);
        insertbst(root, 11);
        insertbst(root, 7);
        insertbst(root, 53);
        insertbst(root, 4);
        insertbst(root, 13);
        insertbst(root, 12);
        insertbst(root, 8);
        insertbst(root, 60);
        insertbst(root, 19);
        insertbst(root, 16);
        insertbst(root, 20);
    // root = insertbst(root, 10);

    // root = insertbst(root, 20);
    // root = insertbst(root, 30);
    // root = insertbst(root, 40);
    // root = insertbst(root, 50);
    // root = insertbst(root, 25);
    print(root);
    // cout<<max(45,6);
    return 0;
}