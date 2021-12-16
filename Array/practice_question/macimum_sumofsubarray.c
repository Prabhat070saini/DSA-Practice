//Kadane's Algorithm  vvvvim

#include<stdio.h>
int main(){
int n;
    printf("Enter the number of element of array\n");
    scanf("%d", &n);
    int arrray[n];
    printf("Enter the  element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrray[i]);
    }
    int cursum=0,max=arrray[0];
    for (int  i = 0; i < n; i++)
    {
        cursum+=arrray[i];
        if (cursum>max)
        {
            max=cursum;
        }
        if (cursum<0)
        {
            cursum=0;
        }
        
        
    }
    
    printf("maxsum of subarray : %d",max);
 return 0;
}