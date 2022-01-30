#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (mid * mid >= n)
        {
            end = mid - 1;
        }
        else
        {
            start = mid;
        }
        mid = start + (end - start) / 2;
    }
    cout<<start;
    return 0;
}