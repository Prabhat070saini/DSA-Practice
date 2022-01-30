#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}
int s=0,end=n-1;
int key=7;
int mid=s+(end-s)/2;
while (s<=end)
{
    cout<<"arrmid"<<arr[mid]<<endl;
    if (arr[mid]==key)
    {
        cout<<"found at index"<<mid<<endl;
        break;
    }
    else if (arr[mid]<key)
    {
        s=mid+1;
    }
    else
    {
        end=mid-1;
    }
    mid=s+(end-s)/2;
    
}


 return 0;
}