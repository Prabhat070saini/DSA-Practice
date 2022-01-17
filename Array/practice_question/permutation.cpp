#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of element in array\n";
    cin >> n;
    int array[n];
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int nm=fact;
 int ar[fact];
    while (fact > 0)
    {

        int num = 0;
        int st = array[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            array[i] = array[i - 1];
        }
        array[0] = st;
        for (int i = 0; i < n; i++)
        {

            num = num * 10 + array[i];
        }
        cout << "[" << num << "]";
        fact--;
        ar[fact-1]=num;
    }
    cout<<endl;
    sort(ar,ar+nm);
    for (int  i = 0; i < nm; i++)
    {
        cout<<ar[i]<<" ";
    }
    

    // cout << "one cycle ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << endl;
    // }

    // cout << fact;

    return 0;
}