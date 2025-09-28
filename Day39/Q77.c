//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
        printf("Not a square matrix");
        return 0;
    }
    int arr[m][n];
    printf("Enter the array elements\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int diag[m];
    for(int i=0;i<m;i++)
    {
        diag[i]=arr[i][i];
    }
    for(int i=0;i<m-1;i++)
    {           
        for(int j=i+1;j<m;j++)
        {   if(diag[j]==diag[i])
            {
               printf("False i.e Diagonal elements are not distinct");
            return 0;
         
            }
        }
        
    }
    printf("True i.e diagonal elements are distinct ");
    return 0;

}