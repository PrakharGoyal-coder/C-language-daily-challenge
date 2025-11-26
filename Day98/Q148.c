/*Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include<stdio.h>
#include<string.h>
struct Student 
{
    char name[40];
    int roll;
    int marks;
};
int main()
{
    struct Student s1;
    struct Student s2;
    //inputting information
    printf("Enter the data for 1st student:\n");
    printf("Enter the name:");
    scanf("%s",s1.name);
    printf("Enter the roll:");
    scanf("%d",&s1.roll);
    printf("Enter the marks:");
    scanf("%d",&s1.marks);

    printf("Enter the data for 2nd student:\n");
    printf("Enter the name:");
    scanf("%s",s2.name);
    printf("Enter the roll:");
    scanf("%d",&s2.roll);
    printf("Enter the marks:");
    scanf("%d",&s2.marks);
    
    if((s1.roll==s2.roll)&&(s1.marks==s2.marks)&&(strcmp(s1.name,s2.name)==0))
    {
        printf("Same");
    }
    else
    {
        printf("Not same");
    }
    return 0;
    

}