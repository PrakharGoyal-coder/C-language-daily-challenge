//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Orignal array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int index;
    printf("Enter the index of element that needs to be deleted:");
    scanf("%d",&index);
    for(int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("New array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
   return 0;
}