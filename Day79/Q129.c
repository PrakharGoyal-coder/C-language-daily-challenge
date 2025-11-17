/*Q129: A file numbers.txt contains a list of integers separated by spaces.
 Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("numbers.txt","r");
    if(fptr==NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    int sum=0;
    double avg=0.0;
    int num,count=0;
    
    while(fscanf(fptr,"%d",&num)==1)
    {   
        count++;
        sum=sum+num;
       
    }
    if(count==0)
    {
        printf("No integers found");
        return 1;

    }
    avg=(double)sum/count;
    printf("Sum=%d\n",sum);
    printf("Average=%.2f\n",avg);
    fclose(fptr);
   return 0;
}