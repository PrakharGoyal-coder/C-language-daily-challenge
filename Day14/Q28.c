//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        int pro=1;  //to store the product of even no. till num
        for(int i=1;i<=num;i++)
        {
            if(i%2==0)
            {
                pro=pro*i;
            }


        }
         printf("product of even no. till %d=%d",num,pro);
            
   }
else{
    printf("Invalid input");
}
    return 0;
}