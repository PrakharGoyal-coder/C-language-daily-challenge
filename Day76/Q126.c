/*Q126: Ask the user for a filename.
 Check if it exists by trying to open it in read mode.
  If the file pointer is NULL, print an error message; 
  otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char filename[100];
    printf("Enter the file name:");
    scanf("%s",filename);
    FILE *fptr;
    fptr=fopen(filename,"r");
    if(fptr==NULL)
    {
        printf("File does not exist\n");
        return 1;
    }
    printf("Dispalying file content:\n");
    int c=fgetc(fptr);
    while(c!=EOF)
    {
        printf("%c",c);  
        c=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}