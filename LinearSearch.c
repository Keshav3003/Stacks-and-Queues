//WRITTEN BY KESHAV PRAKASH SHARMA(2K21/CO/238)
#include<stdio.h>
void main()
{
  int n;
  printf("Enter Number Of Terms");
  scanf("%d",&n);
  int a[n]; 
  printf("Enter The Terms");
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\n\nArray is \n");
  for(int i=0;i<n;i++)
  printf(" %d ",a[i]);  
int max=a[0],num,flag=0;
printf("\nEnter Element to be found ");
scanf("%d",&num);
  for(int i=0;i<n;i++)
{
    if(num==a[i])
    {
    printf("Element found at %d th index",i);
    flag++;
    break;
    }
}
if(flag==0)
printf("-1");
}
