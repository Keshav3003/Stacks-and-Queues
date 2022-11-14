//WRITTEN BY KESHAV PRAKASH SHARMA(2K21/CO/238)
#include<stdio.h>
int main()
{
    int row,col;
    printf("\nEnter Matrix row");
    scanf("%d",&row);
    printf("\nEnter Matrix column");
    scanf("%d",&col);
    int arr[row][col];
    printf("\nEnter matrix");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        scanf("%d",&arr[i][j]);
    }
 printf("\n\nThe Matrix is\n");
    for(int i=0;i<row;i++)
     {
            for(int j=0;j<col;j++)
            printf(" %d ",arr[i][j]);
                printf("\n\n");
     }

int num;
printf("\nEnter which row to delete ");
 scanf("%d",&num);
 
 if(num==1)
    {
        for(int i=1;i<=row;i++)
        {
            for(int j=0;j<col;j++)
                    arr[i-num][j]=arr[i-num+1][j];
        }
    row--;
    }
else
{
    
 for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        arr[num-1][j]=arr[num][j];
    }
    row--;
}
    printf("\n\nThe Updated Matrix is\n");
    for(int i=0;i<row;i++)
     {
            for(int j=0;j<col;j++)
            printf(" %d ",arr[i][j]);
                printf("\n\n");
     }
}