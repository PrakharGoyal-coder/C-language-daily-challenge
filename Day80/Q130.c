/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
 Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main() 
{
    FILE *fptr;
    int n;
    char name[50];
    int roll,marks;
    fptr = fopen("data.txt", "w");
    if (fptr==NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++) 
    {
        printf("%d student\n",i);
        printf("Enter name:");
        scanf("%s",name);
        printf("Enter roll number:");
        scanf("%d",&roll);
        printf("Enter marks:");
        scanf("%d",&marks);

        fprintf(fptr,"%s %d %d\n",name,roll,marks);
    }
    fclose(fptr);
    printf("Data saved successfully into the file\n");
    fptr = fopen("data.txt", "r");
    if (fptr==NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nReading student records from file:\n");
    while (1)
    {
        int x=fscanf(fptr,"%s %d %d",name,&roll,&marks);
        if (x!=3) break; // stop at EOF or invalid line
        printf("Name: %s | Roll: %d | Marks: %d\n",name,roll,marks);
    }
    fclose(fptr);
    return 0;
}
