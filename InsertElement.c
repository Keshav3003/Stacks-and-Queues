//WRITTEN BY KESHAV PRAKASH SHARMA(2K21/CO/238)
#include<stdio.h>
void main()
{
   int n;
  printf("Enter Number Of Terms");
  scanf("%d",&n);
  int a[n+2]; 
  printf("Enter The Terms ");
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\n\nArray is \n");
  for(int i=0;i<n;i++)
  printf(" %d ",a[i]);  
int max=a[0],num,flag=0;
printf("\nEnter Element to be added ");
scanf("%d",&num);
int mid;
if(n%2==0)
    mid=n/2+1;
else
    mid=(n+1)/2;
int temp=a[mid];
 for (int i = n; i >=mid; i--)
        a[i] = a[i - 1];
a[mid-1] = num;
printf("\n\nUpdated Array is \n");
  for(int i=0;i<=n;i++)
     printf(" %d ",a[i]);

}
 