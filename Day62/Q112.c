/*
Q112: Write a program to take an integer array arr as input.
The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm.
Print the maximum sum as output. 
If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int max_so_far=arr[0]; //Stores maximum sum found so far
    int current_sum=arr[0]; // stores current subarray sum
    for(int i=1;i<n;i++)
    {
       //if adding the current sum decreases the sum,start new subarray
       if(current_sum+arr[i]<arr[i])
           current_sum=arr[i];
        else
             current_sum+=arr[i];
        //update max_so_far if current_sum is greater
        if(current_sum>max_so_far)
           max_so_far=current_sum;

    }
    printf("Maximum subarray sum=%d",max_so_far);
    return 0;
}