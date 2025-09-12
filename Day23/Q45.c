//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>
int main()
{
    int n;  // to store the number of terms
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=n;i++)
    {
       sum=sum+(2.0*i)/(4*i-1);
    }
    printf("Approximate sum=%.2f",sum);

}