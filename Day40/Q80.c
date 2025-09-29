//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the  no. of rows and columns of first matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter no. of rows and columns of second matrix:");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("The two matrices cannot be multiplied");
        return 0;

    }
    int A[m][n];
    int B[p][q];
    printf("Enter the elements of first matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    int C[m][q];
    //first initializing elements of C as 0
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            C[i][j]=0;
        }
    }
    //multiplying A and B
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<n;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("Product matrix=\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
