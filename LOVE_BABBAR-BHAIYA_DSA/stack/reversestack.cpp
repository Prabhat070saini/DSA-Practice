#include <iostream>
#include <stack>
using namespace std;
void findmid(stack<int> &st, int &mid)
{
    if (mid == 0)
    {
        cout << st.top();
        return;
    }

    int element = st.top();
    st.pop();
    mid = mid - 1;
    findmid(st, mid);
    st.push(element);
}

// insert the element in bottom of the stack
void insertedbottom(stack<int> &st, int &a)
{
    if (st.empty())
    {
        // cout<<"inder";
        st.push(a);
        return;
    }
    // cout<<"pop";
    int top = st.top();
    st.pop();
    insertedbottom(st, a);
    st.push(top);
}
void reversestck(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

// remove top element of stack
    int first = st.top();
    st.pop();
// recuusive call
    reversestck(st);
    insertedbottom(st, first);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    int mid = (st.size()) / 2;
    int y = 30;
    // insertedbottom(st,y);
    reversestck(st);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
        cout << endl;
    }

    return 0;
}