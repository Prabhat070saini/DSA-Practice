#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node T;
// create new node
T *new_node(int x)
{
    T *p = NULL;
    p = (T *)malloc(sizeof(T));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
// insert node in bst
T *insert(T *root, int x)
{
    if (root == NULL)
    {
        return new_node(x);
    }
    else if (x > root->data)
    {
        root->right = insert(root->right, x);
    }
    else
    {
        root->left = insert(root->left, x);
    }
    return root;
}
// inorder travaersal
void printpost(T *root)
{
    
    if (root != NULL)
    {
        

        printpost(root->left);
        
        printpost(root->right);
        cout << root->data << " ";
    }
}void printpre(T *root)
{
    
    if (root != NULL)
    {
        cout << root->data << " ";

        printpre(root->left);
        
        printpre(root->right);
    }
}
void printin(T *root)
{
    
    if (root != NULL)
    {
       

        printin(root->left);
         cout << root->data << " ";
        printin(root->right);
    }
}
T *inroderpre(T *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
T *inroderscr(T *root)
{
    root = root->right;
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
T *deletenode(T *root, int x)
{
    T *iper = NULL;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (root->data < x)
    {
        root->right= deletenode(root->right, x);
    }
    else if (root->data > x)
    {
      root->left=  deletenode(root->left, x);
    }
    else
    {
        if (!root->left)
        {
            iper=inroderscr(root);
            root->data=iper->data;
            root->right=deletenode(root->right,iper->data);
        }
        else
        {
        iper = inroderpre(root);
        root->data = iper->data;
        root->left = deletenode(root->left, iper->data);
        }
    }
    return root;
}
/*
                        20
                       /  \
                      5   21
                     / \    \
                    1   7    22
                         \     \
                          10    23

*/
int main()
{
    T *root = NULL;
    root = new_node(14);
    
    insert(root, 11);
    insert(root, 7);
    insert(root, 17);
    insert(root, 53);
    insert(root, 4);
    insert(root, 13);
    insert(root, 12);
    insert(root, 8);
    insert(root, 60);
    insert(root, 19);
    insert(root, 16);
    insert(root, 20);
    //  root = new_node(4);
    
    // insert(root, 6);
    // insert(root, 5);
    // insert(root, 1);
    // insert(root, 2);
cout<<"IN :";
    printin(root);
    // deletenode(root, 7);
    cout << endl;
    cout<<"\nPOST :";
    printpost(root);
    cout<<"\n\npre:";
    printpre(root);


    return 0;
}