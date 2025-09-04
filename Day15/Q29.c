//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("error:number should be positive");
    }
    else
    {    if(num==0)
        {
            printf("factorial=1");
        }
        else
        {
        int fact=1;//to store the fact
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        printf("factorial=%d",fact);
       } 

    } 
    return 0;
}