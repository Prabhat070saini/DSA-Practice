#include <iostream>
using namespace std;
void reverse()
{
    int n,p;
    // cout<<"Enter the size of array\n";
    cin>>n>>p;
    string A;
    cin>>A;
    // for (int  i = 0; i < n; i++)
    // {
    //     cin>>A[i];
    // }
    int k;
    // cout<<"Enter the reverse string number\n";
    // int p;
    // cin>>p;

    int l;
    // cout<<"Enter the Element of array\n";
    int m=p;
    ml:
    // if (p>m>1)
    // {
    //     m--;
    // }
    
    l=m;
    for (int i = 0; i < m/2; i++)
    {
        k=A[i];
        A[i]=A[l-1];
        A[l-1]=k;
        l--;
    }
    if (m>1)
    {
        m--;
        goto ml;
    }
    else{
        goto pri;

    }
    pri:
    
    cout<<"reverse\n";
    for (int  i = 0; i < n; i++)
    {
        cout<<A[i];
    }
}

int main()
{
    // your code goes here
    // int T;
    // cin >> T;
    // while (T-- > 0)
    // {
    //     int n;
    //     cin >> n;
    //     string s;
    //     cin >> s;
    //     cout << s << endl;
    //     int k;
    //     cin >> k;
    //     int z = 1;
    //     char l;
    //     char h[n];

    // label:
    //     for (int i = 0; i < z / 2; i++)
    //     {
    //         l = s[z - 1];
    //         s[z - 1] = s[0];
    //         s[0] = l;
    //         z++;
    //     }
    //     if (z == k + 1)
    //     {
    //         goto answer;
    //     }
    //     goto label;
    // answer:

    //     cout << s << endl;
    // }
    reverse();

    return 0;
}
