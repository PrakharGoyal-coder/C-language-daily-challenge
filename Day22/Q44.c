//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    float sum;
    if(n>=1)
    {
        sum=1.0;
    }
    for(int i=2;i<=n;i++)
    {
        sum=sum+(2.0*i-1)/(2.0*i);
    }
    printf("Approximate sum=%.1f",sum);
}