#include <stdio.h>

int main() 
{
  int i,t;
 //int ar[t],arr[t];
 printf("Enter total number of test cases: ");
 scanf("%d",&t);
 int ar[t],arr[t];
 printf("Enter fair of cab 1 and 2: \n");
for(i=1;i<=t;i++)
{
   scanf("%d %d",&ar[i],&arr[i]);
    if(ar[i]<arr[i])
    {printf("Cab 2 fair is greater\n");}
    else if(ar[i]>arr[i])
    {printf("Cab 1 fair is greater\n");}
    else
    {printf("Both cab fair same\n");}
}
return 0;
}
