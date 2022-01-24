// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
/* 
Question 
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
solution : this is a only return function;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int 
{
	// Write your code here.
    int i=0,j=0;
    vector<int> v;
    while(i<n&&j<m)
    {
        if(arr1[i]==arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
         }
    }
    return v;
}*/