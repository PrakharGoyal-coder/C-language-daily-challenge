//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main()
{   
    int a,b;//to store the the two numbers
    char ch;//to store the operator that needs to be used for calculation
    printf("Enter the two numbers and the operation(+, -, *, /, %%):\n");
    scanf("%d %d %c",&a,&b,&ch);
    //using switch and matching respective cases
    switch(ch)
    {
        case '+':   printf("%d",a+b);
                  break;
        case '-':   printf("%d",a-b);
                    break;
        case '/':    if(b!=0) 
                    {printf("%d",a/b);
                    }
                    else 
                    {printf("Error:division by 0");
                    }
                     break;
        case '*':   printf("%d",a*b);
                    break;
        case '%':    if(b!=0) 
                    {printf("%d",a% b);
                    }
                    else 
                    {printf("Error:modulus by 0");
                    }
                     break;
        default:  printf("Invalid choice");
        }


}