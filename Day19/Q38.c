//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main()
{
    int num; // to store the number
    printf("Enter positve number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Error:negative no. entered");
    }
    else
    {
        int sum=0;// to store sum of digits
        if(num==0)
        {
            printf("sum=0");
        }
        else{
            while(num>0)
            {
                int rem =num%10; // to store the last digit of num
                sum=sum+rem;
                num=num/10; // removing last digit from num
            }
            printf("Sum ofd digits = %d",sum);
        }

    }
    return 0;
}