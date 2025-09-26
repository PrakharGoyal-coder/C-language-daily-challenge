//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    int arr[m][n];
    int sum[m];
    printf("Enter the elements in the matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing the array:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {    int sumrow=0;
        for(int j=0;j<n;j++)
        {
            sumrow+=arr[i][j];
        }
        sum[i]=sumrow;
    }
    printf("row-wise sum:\n");
    for(int k=0;k<m;k++)
    {
        printf("%d\n",sum[k]);
    }
    return 0;
}