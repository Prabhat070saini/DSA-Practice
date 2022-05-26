#include <iostream>
using namespace std;
bool ispossible(int *rank, int max_time, int number_of_shef, int roti)
{
    int count = 0;
    for (int shef = 1; shef <= number_of_shef; shef++)
    {

        // cout<<"\nshef"<<shef<<endl;
        int min = 1, min_time_make_roti = rank[shef-1];
        while (min_time_make_roti <= max_time)
        {
            count++;
            min++;
            min_time_make_roti = min_time_make_roti + min * rank[shef-1];
         
            
        }

        // cout<<"\nshefrankroti"<<count<<endl;
    // cout<<"count"<<count<<endl;

    }
    if (count >= roti)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int binarysearch(int *rank, int maxtime, int number_of_shef, int roti)
{
    int start = 0, end = maxtime;
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        // cout<<"\nmid"<<mid<<endl;
        bool check = ispossible(rank, mid, number_of_shef, roti);
        if (check)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(check==false)
        {
            start = mid + 1;
            // cout<<"\nfalse\n";
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    cout << "Enter number of shef\nenter the number of roti\n";
    int roti, number_of_shef;
    cin >> roti >> number_of_shef;
    cout<<"rank\n";
    int rank[4];
    for (int i = 0; i < number_of_shef; i++)
    {
       cin>>rank[i];
    }
    
    int maxtime = rank[0] * (roti * (roti + 1)) / 2;
    // cout<<maxtime<<"max\n";
    int x = binarysearch(rank, maxtime, number_of_shef, roti);
    cout << x;
    return 0;
}