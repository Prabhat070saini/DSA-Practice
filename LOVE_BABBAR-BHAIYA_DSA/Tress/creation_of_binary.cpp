#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    // cout <<"JJHY"<< root->data;
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for  " << data << "  left\n";
    root->left = buildtree(root);
    cout << "Enter data for  " << data << "  right\n";
    root->right = buildtree(root);
    return root;
}
void Levelordertraversal(node *root)
{
    // cout<<"root"<<root->data;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<"temp->data" << temp->data;
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
void reverseLevelordertraversal(node *root)
{
    // cout<<"root"<<root->data;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        // q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<"temp->data" << temp->data;
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
        }
    }
}

int main()
{
    node *root;
  root=  buildtree(root);
    // cout<<root->data;
    Levelordertraversal(root);
    return 0;
}