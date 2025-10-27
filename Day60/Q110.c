/*Q110: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the maximum element in each subarray of size k moving from left to right.
Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the value of k:");
    scanf("%d",&k);
    if(k>n||k<=0) 
    {
        printf("Invalid value of k");
        return 0;
    }
    
    for(int i=0;i<=n-k;i++)
    {
       int max=arr[i];
       for(int j=i;j<i+k;j++)
       {
        if(max<arr[j])
        {
            max=arr[j];
        }
       }
       printf("%d ",max);
    }
    return 0;
}