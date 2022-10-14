//WAP to sum user input 2d arrays 2x2 matrix
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("Enter values of 1st matrix ");
    for(i=0;i<=1;i++)
      {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
      }
      printf("Enter values of 2nd matrix ");
      for(i=0;i<=1;i++)
      {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&b[i][j]);
        }
      }
       printf("Sum of 1st and 2nd matrix is: ");
      for(i=0;i<=1;i++)
      {
        for(j=0;j<=1;j++)
        {  c[i][j]=a[i][j]+b[i][j];

           printf(" %d ",c[i][j]);
        }
      }
      return 0;
}
