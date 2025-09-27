//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the no. of rows and colums of 1st array:");
    scanf("%d %d",&m,&n);
    int arr1[m][n];
    printf("Enter elements of first array:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the no. of rows and colums of 2nd array:");
    scanf("%d %d",&p,&q);
    int arr2[p][q];
    printf("Enter elements of second array:\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    if((m!=p)||(n!=q))
    {
        printf("Cannot be added as entered matrices have different dimensions");
        return 0;
    }
    int sum[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];        
        }
    }
    printf("Printing the sum matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
 
}