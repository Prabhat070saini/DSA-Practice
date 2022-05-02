#include<iostream>
using namespace std;
int main(){
int n,q;cin>>n>>q;
int a[n];
for (int i = 1; i < n+1; i++)
{
    cin>>a[i];
}
for (int i = 0; i < q; i++)
{
    int l,r,x;cin>>l>>r>>x;
    int o=r;
    int mid=l+(r-l)/2;
    while (l<=r)
    {
        
        //cout<<"mf"<<mid;
        if (a[mid]<x)
        {
            l=mid+1;
        }
        else if (a[mid]>x)
        {
            r=mid-1;
        }
        else if(a[mid]>=x&&a[mid-1]<x)
        {
            cout<<o-(mid-1)<<"";
            break;
        }
        mid=l+(r-l)/2;
        
        
    }
    
}


 return 0;
}