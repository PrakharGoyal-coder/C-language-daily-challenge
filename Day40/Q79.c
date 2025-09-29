//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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
    printf("Enter the array elements:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing the orignal matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Performing diagonal traversal:\n");
    int total=m+n-1; //no. of diagonals
    for(int d=0;d<total;d++)
    {
        int row,col;
        if(d<n)
        {
            row=0;
            col=d;
        }
        else
        {
            row=d-n+1;
            col=n-1;
        }

        int temp[100],k=0;
        while(row<m && col>=0)
        {
            temp[k++]=arr[row][col];
            row++;
            col--;
        }
        if(d%2==0)
        {
            for(int i=k-1;i>=0;i--)
            {
                printf("%d ",temp[i]);
            }
        }
        else
        {
            for(int i=0;i<k;i++)
            {
                printf("%d ",temp[i]);
            }
        
        }

    }
    return 0;
    
}