/*Q128: Read a text file and count how many vowels and consonants are in the file.
Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *ptr1;
    ptr1=fopen("data.txt","r");
    if(ptr1==NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    int vowels=0,consonants=0;
    int ch=fgetc(ptr1);
    while(ch!=EOF)
    {   ch=tolower(ch);

        if(ch>='a'&& ch<='z')
        {
          if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
          {
             vowels++;
           }
           else
           {
               consonants++;
           }
        }
        ch=getc(ptr1);
        
    }
    fclose(ptr1);
    printf("Count of vowels:%d\n",vowels);
    printf("Count of consonants:%d\n",consonants);
    return 0;
    
}