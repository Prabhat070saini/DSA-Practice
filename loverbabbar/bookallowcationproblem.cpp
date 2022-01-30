// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=1

// bool ispossible(int m,int n,int mid ,vector<int> arr){
    
//     int student=1;
//     int pagesum=0;
//     for(int i=0;i<arr.size();i++){
        
//         if(pagesum+arr[i]<=mid){
            
//             pagesum+=arr[i];
//         }
//         else {
//             student++;
//             if(student>m||arr[i]>mid){
//                     return false;
//              }
//             pagesum=arr[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(vector<int> arr, int n, int m) {
//     // Write your code here.
//     int start=0;
//     int sum=0;
//     for(int i=0;i<arr.size();i++)	{
//         sum+=arr[i];
// }
//     int end=sum;
//     int ans=-1;
//     int mid=start+(end-start)/2;
    
//     while(start<=end){
//         if(ispossible(m,n,mid,arr)){
//             ans=mid;
//             end=mid-1;
//         }
//         else {
            
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
// }
//     return ans;
// }
#include<iostream>

#include<vector>
using namespace std;
int ispossible(int start,int end,vector<int> arr,int student)
{
    vector<int> member(student,-1);
    int s=start,e=end;
    int ans=0;
    int mid=s=(e-s)/2;
    int j=0;
    while (s<e)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if(member[j]<=mid)
            {
                member[j]+=arr.at(i);
            }
            j++;
        }
        

        
    }
    
    
}
int main(){
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
int start=0,end=0;
for (int i = 0; i < v.size(); i++)
{
    end+=v.at(i);
}
// cout<<end;


 return 0;
}