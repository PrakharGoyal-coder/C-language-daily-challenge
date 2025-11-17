/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    char str[100];
    fptr=fopen("data.txt","a");
    if(fptr==NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter the line to be appended:");
    fgets(str,100,stdin);
    fprintf(fptr,"\n%s\n",str);
    fclose(fptr);
    printf("Text appended successfully");
    return 0;
}