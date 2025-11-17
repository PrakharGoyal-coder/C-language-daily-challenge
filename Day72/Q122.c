/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
 The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    fptr=fopen("info.txt","r");
    if(fptr==NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    int ch;
    ch=fgetc(fptr);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);

}