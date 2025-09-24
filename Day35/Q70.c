//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the positions by which the array needs to be rotated to the right:");
    scanf("%d",&k);
    printf("Orignal array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=1;i<=k;i++)
    {
        int temp=arr[n-1];
        for(int j=n-1;j>=1;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
        printf("New array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}