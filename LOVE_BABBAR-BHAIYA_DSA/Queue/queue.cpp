#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<int> q;
q.push(5);
q.push(10 );
q.push(55);
q.push(54);
cout<<q.front();
q.pop();
cout<<q.front();
 return 0;
}