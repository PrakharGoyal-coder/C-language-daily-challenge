/*Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include<stdio.h>
struct Student
{
    int roll;
    char name[100];
    float marks;
};
int main()
{
    
    struct Student stu[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the details of student %d :\n",i+1);
        printf("Enter the roll number:");
        scanf("%d",&stu[i].roll);
        printf("Enter the name:");
        scanf("%s",stu[i].name);
        printf("Enter the marks:");
        scanf("%f",&stu[i].marks);

    }
    printf("Printing the details in tabular form:\n");
    printf("Roll Number\tName\tMarks");
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t\t%s\t\t%f",stu[i].roll,stu[i].name,stu[i].marks);
        printf("\n");
    }
    return 0;

}