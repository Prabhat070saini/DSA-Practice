#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int A[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    int k;
    int l=n;
    cout<<"Enter the Element of array\n";
    for (int i = 0; i < n/2; i++)
    {
        k=A[i];
        A[i]=A[l-1];
        A[l-1]=k;
        l--;
    }
    cout<<"reverse\n";
    for (int  i = 0; i < n; i++)
    {
        cout<<A[i];
    }
    
    

 return 0;
}