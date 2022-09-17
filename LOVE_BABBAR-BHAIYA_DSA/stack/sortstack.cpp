#include <iostream>
#include <stack>
using namespace std;
void inserted(stack<int> &st, int &storeelement)
{
    if (st.empty())
    {
        // cout << "inseted";
        st.push(storeelement);
        // cout<<st.top();
        return;
    }
    if (st.top() <= storeelement)
    {
        st.push(storeelement);

        return;
    }

    int take = st.top();
    st.pop();
    inserted(st, storeelement);
    st.push(take);
}
void sorts(stack<int> &st)
{
    if (st.empty())
    {
        // cout << "sort";
        return;
    }
    int storeelement = st.top();
    st.pop();
    sorts(st);
    // cout<<"fira";
    inserted(st, storeelement);
}
int main()
{
    stack<int> st;
    st.push(3);
    st.push(4);
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(7);
    st.push(6);
    int mid = (st.size()) / 2;
    // findmid(st, mid);
    sorts(st);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}