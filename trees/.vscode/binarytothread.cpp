#include <iostream>
using namespace std;
struct binary
{
    int data;
    int l, r;
    struct binary *left, *right;
};
typedef binary T;
T *createbinarytree()
{
    int data;
    cout << "Enter node data (-1 for no data)\n";
    cin >> data;
    T *temp = NULL;

    if (data == -1)
    {
        temp->l = 0;
        temp->r = 0;
        return NULL;
    }
    temp = (T *)malloc(sizeof(T));
    temp->l = 1;
    temp->r = 1;
    temp->data = data;
    cout << "Enter the left child of" << temp->data << endl;
    temp->left = createbinarytree();
    cout << "Enter the right child of" << temp->data << endl;
    temp->right = createbinarytree();
    return temp;
}
// T *convertthread(T* root)
// {

// }
void print(T *root)
{
    if (root != NULL)
    {
        printf("%d-> child L %d\n child R %d\n", (root->data), (root->l), (root->r));
        print(root->left);
        print(root->right);
    }
}
int main()
{
    T *root = NULL;
    root = createbinarytree();
    cout << "Element of binary tree are :\n";
    print(root);

    return 0;
}