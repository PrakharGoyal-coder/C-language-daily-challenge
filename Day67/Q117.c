/*Q117: Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include<stdio.h>
int main()
{   int m,n;
    printf("Enter the sizes(i.e. m&n) of the 2 arrays:");
    scanf("%d %d",&m,&n);
    int nums1[m],nums2[n];
    printf("Enter first sorted array of size %d: ",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&nums1[i]);
        if(i>0 && nums1[i]<nums1[i-1])
        {
            printf("Not in sorted order");
            return 0;
        }
    }
    printf("Enter second sorted array of size %d: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums2[i]);
        if(i>0 && nums2[i]<nums2[i-1])
        {
            printf("Not in sorted order");
            return 0;
        }
    }
    int merge[m+n];
    int i=0,j=0,k=0;//pointers for nums1,nums2,merge

    //merging 2 array
    while(i<m && j<n)
    {
        if(nums1[i]<=nums2[j])
        {
            merge[k]=nums1[i];
            i++;
        }
        else
        {
            merge[k]=nums2[j];
            j++;
        }
        k++;
    }

    //if elements are left in nums1
    while(i<m)
    {
        merge[k]=nums1[i];
        i++;
        k++;
    }

    //if elements are left in nums1
    while(j<n)
    {
        merge[k]=nums2[j];
        j++;
        k++;
    }

    printf("Merged Sorted Array:");
    for(int x=0;x<m+n;x++)
    {
        printf("%d ",merge[x]);
    }
    return 0;
}