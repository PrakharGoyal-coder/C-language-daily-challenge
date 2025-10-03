//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
int main()
{
    char str1[100];
    printf("Enter the string:");
    fgets(str1,100,stdin);
    char str2[100];
    int i=0;
    for(i=0;str1[i]!='\0';i++)
    {  if(str1[i]==' ')
        {
         str2[i]='-';
        }
        else
        {
            str2[i]=str1[i];
        }
    }
    str2[i]='\0';
    printf("new string:");
    puts(str2);
    return 0;

}