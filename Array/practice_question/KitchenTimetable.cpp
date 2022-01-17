#include <iostream>
using namespace std;
int main()
{
    //  cout<<"no of test case\n";
    int T;
    cin >> T;

    while (T-- > 0)
    {
        int n;
        cin >> n;
        int store = 0, c = 0;
        int moments[n], cookingtime[n];
        // cout<<"Enter moment\n";

        for (int i = 0; i < n; i++)
        {
            cin >> moments[i];
        }
        // cout<<"enter time required\n";

        for (int i = 0; i < n; i++)
        {
            cin >> cookingtime[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i==0)
            {
                store = moments[i] - store;

            }
            else{
                store=moments[i]-moments[i-1];
            }
            
            
            if (store >= cookingtime[i])
            {
                cout<<"store"<<store<<"\n"<<"loop"<<i<<endl;
                cout<<"check\n";

                c++;
            }
        }
        cout <<c<<endl;
    }

    return 0;
}