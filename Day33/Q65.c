//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main()
{ 
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // sorting the elements
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int x;
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    int L=0;
    int U=n-1;
    while(L<=U)
    {
        int mid=(L+U)/2;
        if(arr[mid]<x)
        {
            L=mid+1;
        }
        else if(arr[mid]>x)
        {
            U=mid-1;
        }
        else if(arr[mid]==x)
        {
            printf("Found at index =%d",mid);
            return 0;

        }

    }
    if(L>U)
    {
        printf("Element not found");
    }
}