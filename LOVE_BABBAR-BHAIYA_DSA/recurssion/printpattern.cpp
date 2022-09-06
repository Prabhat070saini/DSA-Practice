/*
input 123
output 123
12_3
1_23
1_2_3

*/
#include <iostream>
using namespace std;
void printpattern(string s, string output, int index)
{
    if (index == s.size())
    {
        // cout<<1;
        cout << output << endl;
        return;
    }
    char ch = s[index];
    output.push_back(ch);
    printpattern(s, output, index + 1);
    output.push_back('_');
    if (s[index+1] != '\0')
    printpattern(s, output, index + 1);
}
int main()
{
    string n;
    cin >> n;
    printpattern(n, "", 0);

    return 0;
}