/*Q124: Take two filenames from the user – a source file and a destination file.
 Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include<stdio.h>
int main()
{
   char source_file[20],dest_file[20];
   printf("Enter the source file:");
   scanf("%s",source_file);
   printf("Enter the destination file:");
   scanf("%s",dest_file);
   FILE *ptr1,*ptr2;
  ptr1=fopen(source_file,"r");
   ptr2=fopen(dest_file,"w");
   int ch=fgetc(ptr1);
   while(ch!=EOF)
   {
    fputc(ch,ptr2);
    ch=fgetc(ptr1);
   }
   printf("Content copied successfully");
   fclose(ptr1);
   fclose(ptr2);
   return 0;
}