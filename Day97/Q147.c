/*Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main() 
{
    struct Employee emp, empRead;
    FILE *fp;

    // Writing employee data to a binary file 
    fp=fopen("employee.dat", "wb");
    if(fp==NULL) 
    {
        printf("Could not open file for writing.\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d",&emp.id);

    printf("Enter Name: ");
    scanf("%s",emp.name);

    printf("Enter Salary: ");
    scanf("%f",&emp.salary);

    // Saving the structure in binary format 
    fwrite(&emp,sizeof(emp),1,fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    // Reading the stored data from the binary file 
    fp=fopen("employee.dat", "rb");
    if (fp==NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    fread(&empRead, sizeof(empRead), 1, fp);
    fclose(fp);

    // Showing what was stored earlier 
    printf("\nEmployee Data Read from File:\n");
    printf("ID     : %d\n", empRead.id);
    printf("Name   : %s\n", empRead.name);
    printf("Salary : %.2f\n", empRead.salary);

    return 0;
}
