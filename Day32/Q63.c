//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter number of elements in 1st array:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter elements of 1st array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter number of elements in 2nd array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter elements of 2nd array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    //merging two arrays 
    int merge[n1+n2];
    for(int x=0;x<(n1+n2);x++)
    {   if(x<n1)
        {
        merge[x]=arr1[x];
        }
        else
        {
            merge[x]=arr2[x-n1];
        }
    }
    //printing merged array
    printf("Merged array: ");
    for(int i=0;i<(n1+n2);i++)
    {
        printf("%d ",merge[i]);
    }
    return 0;

}