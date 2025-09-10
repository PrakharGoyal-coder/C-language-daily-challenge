//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
 Input 1:
 1010
 Output 1:
 0101

 Input 2:
 1111
 Output 2:
 0000

 */
#include <stdio.h>

int main()
{
    int num,digits;
    printf("Enter number of digits in the binary number: ");
    scanf("%d", &digits);
    printf("Enter the binary number:");
    scanf("%d",&num);
    //int digits=0;
    int temp=num;
    // while(temp>0)
    // {
    //     digits++;
    //     temp=temp/10;
    // }

    //Extract digits from left to right using divisor
    int divisor=1;
    for(int i=1;i<digits;i++)
    {
        divisor=divisor*10;
    }
    temp=num;
    printf("1's complement: ");
    while(divisor>0)
    {
        int d=temp/divisor;
        temp=temp% divisor;
        divisor=divisor/10;

        if(d==0)
        {printf("1");  }
        else if(d==1)
        {printf("0");  }
        else
        {
            printf("\n Not a binary number");
            return 0;
        }
    }
    return 0;
    
}
