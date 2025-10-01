//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,100,stdin);
    char newstr[100];
    int i=0;
    for(i=0;str[i]!='\n';i++)
    {
        int ch=str[i];
        if(ch>=97 && ch<=122)
        {
            newstr[i]=(char)(ch-32);

        }
        else 
        {
            newstr[i]=str[i];
        }
    
    }
    newstr[i]='\0';
    printf("New string = ");
    for(int k=0;str[k]!='\0';k++)
    {
        printf("%c",newstr[k]);
    }
    printf("\n");
    return 0;
}