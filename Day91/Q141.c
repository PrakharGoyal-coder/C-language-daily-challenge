/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include<stdio.h>
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
    struct Student s;
    printf("Enter the name:");
    scanf("%s",s.name);
    printf("Enter the roll no:");
    scanf("%d",&s.roll_no);
    printf("Enter the marks:");
    scanf("%f",&s.marks);
    printf("Name: %s | Roll:%d | Marks:%.1f\n",s.name,s.roll_no,s.marks);
    return 0;
}