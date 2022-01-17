#include <iostream>
using namespace std;
int main()
{
    int T, j = 0;
    cin >> T;
    while (j < T)
    {
        int flag = 0;
        cout<<"Enter the size";
        int size;
        cin >> size;
        int array[size];
        if (size % 2 == 0)
        {
            cout << "no";
            j++;
            continue;
        }

        int middle = size / 2;

        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        if (array[0] != 1 || array[size - 1] != 1)
        {
           
            flag = 1;
             goto label;
        }
        for (int i = middle; i < size-1; i++)
        {
            if (array[i]-1 != array[i + 1])
            {
                
                flag = 1;
            }
        }
        for (int i = middle; i > 0; i--)
        {
            if (array[i]-1 != array[i-1])
            {
               
                flag = 1;
            }
        }
    label:
    if (flag)
    {
         cout << "no";
    }
    else
    {
        cout<<"yes";
    }
    
       

        j++;
    }

    return 0;
}