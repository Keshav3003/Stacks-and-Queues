//WRITTEN BY KESHAV PRAKASH SHARMA(2K21/CO/238)
#include<stdio.h>
int main()
{
    int n,num;
     printf("Enter number to be searched ");
     scanf("%d",&num);
    printf("Enter Sorted Array Size ");
    scanf("%d",&n);
    int arr[n]; 
    printf("Enter Sorted Array ");
    for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
    int min=0,max=n-1,flag=-1,mid;
    while(min<=max)
    {
        mid=(min+max)/2;
        if(num<arr[mid])
            max=mid-1;
        else
        if(num>arr[mid])
            min=mid+1;
        else
            {
                flag=mid;
                break;
            }
    }
            if(flag==-1)
            printf("Element Not Found");
            else
            printf("Element found at index %d",flag);
        return 0;
}
