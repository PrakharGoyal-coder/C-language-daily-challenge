//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\n';i++)
    {
          char ch=str[i];
          if(ch>='a' && ch<='z')
          {
            int count =0;
            for(int j=0;str[j]!='\n';j++)
            {
                if (ch==str[j])
                count++;
            }

            if(count>1)
            {   printf(" First Repeated lowercase alphabet:");
                printf("%c",ch);
                return 0;
            }
          }
    }
    printf("No lowercase alphabet repeated in the string");
    return 0;

}