#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
bool ispossible(vector<int> &stalls, int k, int max_distance)
{
    int lastpositoncow = stalls[0];
    int cows = 1;
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - lastpositoncow >= max_distance)
        {
            cows++;
            lastpositoncow = stalls[i];
        }
         if (cows == k)
        {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    for (int i = 0; i < stalls.size(); i++)
    {
        cout<<stalls[i];
    }
    cout<<endl;
    int n = stalls.size();
    cout<<n;
    int start = 0, end = stalls[n - 1] - stalls[0];
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (ispossible(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int n, k;
        cin >> n >> k;
        // cout << "N" << n << endl;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            v.push_back(data);
            // cout<<"vector"<<v[i];
        }
        int x=aggressiveCows(v,k);
        cout<<x;
    }
    return 0;
}