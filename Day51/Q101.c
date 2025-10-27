/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present.


Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int nums[n];
    printf("Enter the elements in the array in ascending order:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
        if(nums[i]<nums[i-1] && i>0)
        {
            printf("Not in ascending order");
            return 0;
        }
    }
    int target;
    printf("Enter the target:");
    scanf("%d",&target);
    int index1=-1,index2=-1,count=0;
    printf("%d occured at:\n",target);
    for(int i=0;i<n;i++)
    {   
        if(nums[i]==target)
        {
           
           count++;
           if(count==1)
           {
            index1=i;
           }
           else // for more than 2 occurences
           {
             index2=i;
           }
        }
    }
    if(index1==-1 && index2==-1)
    {
        printf("%d, %d",index1,index2);
    }
    else if(count==1)
    {
        printf("%d, %d",index1,index1);
    }
    else{
        printf("%d,%d",index1,index2);
    }
    return 0;
}