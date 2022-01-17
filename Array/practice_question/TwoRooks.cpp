#include <iostream>
#include <cstdlib>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int x = 0, y = 0;

        int n;
        cin >> n;
        int A[n];
        int p = n / 2 + 1, q = n / 2;
        int P[p], Q[q];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        
        sort(A,A+n);
        for (int i = 0; i < n; i++)
        {
            cout << A[i];
        }
    //     for (int i = 0; i < n; i = i + 2)
    //     {
    //         P[x] = A[i];
    //         x++;
    //     }
    //     for (int i = 1; i < n; i = i + 2)
    //     {
    //         Q[y] = A[i];
    //         y++;
    //     }
    //     // for (int i = 0; i < x; i++)
    //     // {
    //     //     cout << "P" << P[i] << endl;
    //     // }
    //     // for (int i = 0; i < y; i++)
    //     // {
    //     //     cout << "Q" << Q[i] << endl;
    //     // }
    //     int M=(p+1)/2;
    //     int N=(q+1)/2;
    //     cout<<abs(P[M-1]-Q[N-1])<<endl;
     }
    return 0;
}