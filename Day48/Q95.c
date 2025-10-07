//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter first string:");
    fgets(str1,100,stdin);
    printf("Enter second string:");
    fgets(str2,100,stdin);
    char str3[200];
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2)
    {
        printf("Not rotation");
        return 0;
    }
    if(str1[len1-1]=='\n')
    {
    str1[len1-1]='\0';
    }
    if(str2[len2-1]=='\n')
    {
    str2[len2-1]='\0';
    }
    len1=strlen(str1);
    len2=strlen(str2);
    strcpy(str3,str1);
    strcat(str3,str1);
    
    // Concatenating string str1 with itself  in a temporary string str3
    strcpy(str3,str1);
    strcat(str3,str1);

    //checking if str2 present in str1
    
    if(strstr(str3,str2)!=NULL)
    {
        printf("Rotation");
        return 0;
    }
   else
   {
    printf("Not Rotation");
   }
   return 0;
}