//WAP to search largest number form an array
#include<stdio.h>

int main()
{
int i,ar[10],max[0];
max[0]=0;

for(i=0;i<10;i++)
{
	scanf("%d",&ar[i]);
	printf("Enter elements in array: ");
}
for(i=0;i<10;i++)
{
	if(max[0]<ar[i])
	max[0]=ar[i];
}	
 printf("largest number is %d",max[0]);
return 0;
}
