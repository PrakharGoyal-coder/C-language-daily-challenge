//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elementsof array:");
    scanf("%d",&n);
    int arr[40];
    printf("Enter the elements in ascending order:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<arr[i-1])
        {
            printf("values are not sorted..");
            return 0;
        }

    }
    int x;
    printf("Enter the element to be inserted:");
     scanf("%d",&x);
     n=n+1;
     int index=0;
     for(int i=0;i<n;i++)
     {
        if(arr[i]<x)
        {
            index=i+1;
        }
     }
     for(int i=n-2;i>index;i--)
     {
        arr[i+1]=arr[i];
     }
     arr[index]=x;
     printf("New array: ");
     for(int i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
     return 0;

}