#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int nq, qtype, x, cmax = INT_MIN;
    stack<pair<long, long>> stk;
    cin >> nq;
    while (nq--)
    {
        cin >> qtype;
        if (qtype == 1)
        {
            cin >> x;
            cmax = max(x, cmax);
            stk.push(make_pair(x, cmax));
        }
        else if (qtype == 2)
        {
            stk.pop();
            if (stk.empty())
            {
                cmax = INT_MIN;
            }
            else
            {
                cmax = stk.top().second;
            }
           
        }
        else{
            cout<<cmax<<endl;
        }
    }

    return 0;
}
