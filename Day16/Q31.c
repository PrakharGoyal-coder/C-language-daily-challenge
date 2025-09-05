//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("error:negative no. entered");
    }
    else if(num==0)
    {
        printf("binary=0");
    }
    else
    {
        int bin=0;//to store the binary equivalent
        int place=1; //counter variable to calc binary
        while(num>0)
        {
            int d=num%2;
            bin=d*place+bin;
            place=place*10;
            num=num/2;
          }
          printf("binary = %d",bin);
     }
     return 0;
}  