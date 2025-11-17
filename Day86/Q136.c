/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
enum Operations{ADD=1,SUB,MULTIPLY};
int main()
{   int choice;
    printf("MENU\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiply\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    enum Operations op=(enum Operations)choice;
    int a,b;
    printf("\nEnter the two numbers:");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case ADD: printf("%d",a+b);break;
        case SUB: printf("%d",a-b);break;
        case MULTIPLY:printf("%d",a*b);break;
        default :printf("Invalid Choice");
    }

   return 0;
}