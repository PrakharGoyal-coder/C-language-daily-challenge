//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
int main()
{
    
  int a,b,c;// to store three numbers
  //inputting 3 numbers
  printf("Enter three numbers:");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  //checking if a>=b
   if(a>=b)
   {
       if(a>=c)  //if a>=c and a>=b
        {
           printf("Largest is %d",a);
        }
        else  //a>=b and a<c so c is largest
       {
           printf("Largest is %d", c);
        }
    }
    else //a<b
    {
        if(b>=c)  //a<b and b>=c
       {
           printf("Largest is %d",b);
       }
        else //a<b and b<c
       {
           printf("Largest is %d",c);
       }
    }
    return 0;
}