//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n+10];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int index,x;
    printf("Enter the index at which element is to be inserted:");
    scanf("%d",&index);
    printf("Enter the element to be inserted:");
    scanf("%d",&x);
    
    printf("Orignal array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    n=n+1;
    for(int i=n-2;i>=index;i--)
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