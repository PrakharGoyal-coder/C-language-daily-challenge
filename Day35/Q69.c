//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array(n>1):");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Only one element is present");
        return 0;
    }
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int sec_max;
    if (arr[0]!=max)
    {
      sec_max=arr[0];
    }
    else
    {
        sec_max=arr[1];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max &&  arr[i]>sec_max)
        {
            sec_max=arr[i];
        }
    }
    printf("Second maximum element=%d",sec_max);
    return 0;
}