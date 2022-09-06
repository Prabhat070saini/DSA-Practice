#include<iostream>
using namespace std;
void printpowerset(string s,string output,int index)
{
   if(index==s.size())
    {
        // cout<<1;
        cout<<output<<endl;
        return;

    }
 char ch= s[index];
 printpowerset(s,output,index+1);
 output.push_back(ch);
//  if (s[index]!='\0')
//  {
//      char e='-';
//      output.push_back(e);
//  }
 
 printpowerset(s,output,index+1);
  
  
}
int main(){
string s;
cin>>s;
printpowerset(s," ",0);
 return 0;
}