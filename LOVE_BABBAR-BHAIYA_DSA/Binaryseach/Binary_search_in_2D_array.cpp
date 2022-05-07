#include <iostream>
using namespace std;
bool binary_seacrch(int arr[][3], int row, int m, int target)
{
   // cout<<endl<<row<<"row\n"<<target<<endl<<m<<endl;
    int s = 0, e = m - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[row][mid] == target)
        {
            cout << row << " " << mid;
            return 1;
        }
        else if (arr[row][mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}
bool search(int n, int m, int arr[][3], int target)
{
    //cout<<n<<"n"<<m<<"m";
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
      //  cout<<endl<<mid<<"mid\n";
        if (arr[mid][0] == target)
        {
            cout << mid << 0;
            return 1;
        }
        else if (arr[mid][m - 1] == target)
        {
            cout << mid << m - 1;
             return 1;
        }
        else if (arr[mid][0] < target && target< arr[mid][m - 1])
        {
             
            bool k = binary_seacrch(arr, mid, m, target);
            return k;
           
        }
        else if (arr[mid][0] > target)
        {
            e = mid - 1;
        }
        else if (arr[mid][m - 1] < target)
        {
            s = mid + 1;
        }
    }
    return 0;
}
int main()
{
    int arr[4][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9,
        10, 11, 12};
    int n = 4, m = 3;
    bool s;
    s = search(n, m, arr,14);
    if (s)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}