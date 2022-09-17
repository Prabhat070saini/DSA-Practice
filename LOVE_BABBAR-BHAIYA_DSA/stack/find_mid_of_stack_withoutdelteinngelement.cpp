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
    findmid(st, mid);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}