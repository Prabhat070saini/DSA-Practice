#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cout<<"Enter the number of element\n";
    cin >> n;  cout<<"Enter the element\n";
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr.push_back(data);
    }
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    int pivot = start;
    cout << "pivot" << pivot;
    int key;  cout<<"Enter the key\n";
    cin >> key;
     cout<<"M HU F "<<arr[0]<<" M HU PI-1"<<arr[pivot-1];
    if (arr[pivot] <= key&&key <= arr[end])
    {
        cout<<"M KI HU"<<key<<endl;
        int s = pivot, end = n - 1;
        int mid = s + (end - s) / 2;
        while (s <= end)
        {
           // cout << "arrmid" << arr[mid] << endl;
            if (arr[mid] == key)
            {
                cout << "found at index" << mid << endl;
                break;
            }
            else if (arr[mid] < key)
            {
                s = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = s + (end - s) / 2;
        }
    }
   
    else if (arr[0] <= key &&key<= arr[pivot - 1])
    {
        int s = 0, end = pivot - 1;
      
        int mid = s + (end - s) / 2;
        while (s <= end)
        {
            cout << "arrmid" << arr[mid] << endl;
            if (arr[mid] == key)
            {
               cout << "found at index" << mid << endl;
                break;
            }
            else if (arr[mid] < key)
            {
                s = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = s + (end - s) / 2;
        }
    }
    else{
        cout<<"not found";
    }

    return 0;
}