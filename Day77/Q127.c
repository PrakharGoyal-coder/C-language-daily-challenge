/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase,
 and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    FILE *ptr1,*ptr2;
    ptr1=fopen("input.txt","r");
    if(ptr1==NULL)
    {
        printf("Error opening input.txt");
        return 1;
    }
    ptr2=fopen("output.txt","w");
    int ch=fgetc(ptr1);
    while (ch!=EOF)
    {
        if(ch>='A' && ch<='Z')
        {   char ch2=tolower(ch);
            fputc(ch2,ptr2);
        }   
        
        else if(ch>='a' && ch<='z')
        {   
            char ch2=toupper(ch);
            fputc(ch2,ptr2);
        }
        else 
          fputc(ch,ptr2);
       ch=fgetc(ptr1);   
    }    
    printf("Text moved to output.txt with changing uppercase to lowercase");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}