//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter first string:");
    fgets(str1,100,stdin);
    printf("Enter the second string:");
    fgets(str2,100,stdin);
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2)
    {
        printf("Not Anagrams");
        return 0;
    }
    for(int i=0;str1[i]!='\n';i++)
    {
        int count1=0,count2=0;
        for(int k=0;str1[k]!='\n';k++)
        {  if(str1[k]==str1[i])
              {  count1++;
              }
        }
        for(int j=0;str2[j]!='\n';j++)
        {
            if(str2[j]==str1[i])
            {
                count2++;
            }
        }
        if(count1!=count2)
        {   printf("Not Anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;

}