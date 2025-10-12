//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i,j,k;
    printf("Enter a string: ");
    scanf("%s",str);
    int len=strlen(str);

    for (i=0;i<len;i++) 
    {
        for (j=i;j<len;j++) 
        {
            // printing  substring from str[i] to str[j]
            for (k=i;k<=j;k++)
            {
                printf("%c",str[k]);
            }
            // Print comma only between substrings
            if (!(i==len-1 && j==len - 1)) 
            {
                printf(",");
            }
        }
    }
    printf("\n");
    return 0;
}
