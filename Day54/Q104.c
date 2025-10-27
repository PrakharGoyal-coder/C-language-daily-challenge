/*
Q104: Write a Program to take a positive integer n as input,
and find the pivot integer x such that the sum of all elements between 1 and x inclusively 
equals the sum of all elements between x and n inclusively. 
Print the pivot integer x. If no such integer exists, print -1.
Assume that it is guaranteed that there will be at most one pivot integer for the given input.


Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int x,pivot=-1;
    for(int i=1;i<=n;i++)
    {
        int lsum=0,rsum=0;
        for(int j=1;j<=i;j++)
        {
            lsum+=j;
        }
        for(int k=i;k<=n;k++)
        {
           rsum+=k;
        }
        if(rsum==lsum)
        {
            pivot=i;
            break;
        }
    }
    printf("Pivot=%d",pivot);
    return 0;
}