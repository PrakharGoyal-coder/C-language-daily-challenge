/*Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
/*Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include<stdio.h>
struct Student
{
    char name[50];
    int roll;
    int marks;
};
struct Student topStudent(struct Student s[],int n)
{    int i,topper_index=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].marks>s[topper_index].marks)
        {
            topper_index=i;

        }
    }
   return s[topper_index];
}
int main()
{
    int n=3;
    struct Student s[3];
    //inputting
    for(int i=0;i<3;i++)
    {
    printf("Enter the details of %d student:\n",i+1);
    printf("Enter the name:");
    scanf("%s",s[i].name);
    printf("Enter the roll number:");
    scanf("%d",&s[i].roll);
    printf("Enter the marks:");
    scanf("%d",&s[i].marks);
    }
    struct Student top=topStudent(s,n);
    printf("Top Student :%s |Roll:%d  |Marks:%d",top.name,top.roll,top.marks);

    return 0;
}