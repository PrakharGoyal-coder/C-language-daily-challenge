//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main()
{
    int num; //to store the number
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("error:Negative no. entered");
        return 0;
    }
    int prod=1; //to store product of odd no
    while(num>0)
    {
        int rem=num%10; // to extract last digit of num
        if(rem%2==1)//if digit is odd
        {
            prod=prod*rem;
        }
        num=num/10;
    }
    printf("product of odd no=%d",prod);
    return 0;

}