//main logic is do not reapeate back coin if you take it next

/*
                     4,{1,2}
                    1/
//4-1=3          3,{1,  2}
                1 /       \2
//3-1=2          2,{1,2}   1.{1,2} thisstepnotallowbecauseyouhavecometotake2soyouhavenotchancgeto back
               1/      \2
//2-1=1       1,{1,2}    0 return 1; //2-2=0
//2-1=-1     1 /      \2    //1-2=-1
//1-1=0       0,{1,2}    -1,{1,2}
             return 1;      return 0;
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findways(int target,int A[],int n,int currecntcoin)
{
    // cout<<A[0];
if (target==0)
{
    cout<<"return 0\n";
    return 1;
}
if(target<0){
cout<<"return negavtive\n";
return 0;
}
int ways=0;
for (int i = currecntcoin; i <n; i++)
{
    // cout<<"I"<<i<<endl;
    cout<<"currentcoin"<<A[i]<<"target"<<target<<endl;
    ways+=findways(target-A[i],A,n,i);
    cout<<"ways"<<ways<<endl;
}



return ways;

}
int main(){
int target,n;cin>>target>>n;
int coin[2]={1,2};
int ans=findways( target,coin,n,0);
cout<<ans;

 return 0;
}