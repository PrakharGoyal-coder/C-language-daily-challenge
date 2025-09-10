//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
     if(num<0)
    {
        printf("error:Negative no. entered");
        return 0;
    }
    int sum=0; //to store sum of factors
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num == sum)
    {
        printf("%d is a Perfect Number",num);

    }
    else
    {
        printf("%d is a NOT Perfect Number",num);
        
    }
    return 0;
}