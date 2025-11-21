/*Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include<stdio.h>

struct Student
{
    int roll;
    char name[40];
    float marks;

};
int main()
{
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct Student stu[n];
    printf("Enter the details:");
    for(int i=0;i<n;i++)
    {
         printf("Enter the details of student %d :\n",i+1);
         printf("Enter the name:");
         scanf("%s",stu[i].name);
         printf("Enter the roll number:");
         scanf("%d",&stu[i].roll);
        printf("Enter the marks:");
        scanf("%f",&stu[i].marks);
    }
    int max_marks=stu[0].marks;
    for(int i=0;i<n;i++)
    {
        if(max_marks<stu[i].marks)
        {
            max_marks=stu[i].marks;
        }
    }
    printf("Displaying the student with highest marks\n");
    for(int i=0;i<n;i++)
    {
        if(stu[i].marks==max_marks)
        {
            printf("%s\t(marks= %.2f)\n",stu[i].name,stu[i].marks);
        }
    }
   return 0;

}