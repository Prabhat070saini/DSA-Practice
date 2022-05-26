#include <iostream>
using namespace std;
bool ispossible(int *A, int n, int max_book_size, int number_of_student)
{
    int student = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum > max_book_size)
        {
            sum = 0;
            student++;
            i--;
        }
    }
    if (student == number_of_student)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int binarysearch(int *A, int n, int number_of_student, int sumofarray)
{
    int start = 0,ans=0;
    int end = sumofarray;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        bool check = ispossible(A, n, mid, number_of_student);
        cout<<"mid"<<mid<<endl<<check<<endl;
        if (check)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int n, number_of_sstudent;
    cin >> n >> number_of_sstudent;
    int arr[n];
    int sumofarray = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sumofarray += arr[i];
    }
    
    int x=binarysearch(arr,n,number_of_sstudent,sumofarray);
    cout<<x;

    return 0;
}