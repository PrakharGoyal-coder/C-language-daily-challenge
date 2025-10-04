//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    printf("Enter the string:");
    fgets(str1,100,stdin);
    char str2[100];
    int len=strlen(str1);
    int i=0;
    for(i=0;i<len;i++)
    {
        int x=(int)str1[i];
        if(x>=65 && x<=90)
        {
            str2[i]=(char)(x+32);
        }
        else if(x>=97 && x<=122)
        {
            str2[i]=(char)(x-32);
        }
        else
        {
          str2[i]=str1[i];
        }
  
    }
    str2[i]='\0';
    printf("New String=");
    puts(str2);
    return 0;
}