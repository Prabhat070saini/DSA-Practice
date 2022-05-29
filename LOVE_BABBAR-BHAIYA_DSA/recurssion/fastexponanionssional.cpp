/* ||||||||||---------------------------||||||||||||||||||||||||||

          find A to the power B

 ||||||||||---------------------------||||||||||||||||||||||||||*/


#include<iostream>
using namespace std;
int exp(int power,int base){
    if (power==0)
    {
            return 1;
    }
    
    int cp=exp(power/2,base);
    int ans=-1;
    if (power&1)
    {
        ans=cp*cp*base;
    }
    else{
        ans=cp*cp;
    }
    return ans;
}
int main(){
int power,Base;cin>>power>>Base;
int ans=exp(power,Base);
cout<<ans;
 return 0;
}