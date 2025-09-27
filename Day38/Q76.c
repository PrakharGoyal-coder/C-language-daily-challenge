//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    if(m!=n)
    {
        printf("False i.e Non symmetric\n ");
        printf("As for symmetric matrix no. of rows should be equal to no. of columns");
        return 0;
    }
    int arr[m][n];
    printf("Enter the array elements:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing orignal matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                printf("False i.e Non symmetric");
                return 0;
            }
        }
    }
    
      printf("True i.e symmetric");
      return 0;
}