//WAP to make a calculator using custom functions using "int main"
#include<stdio.h>
int sum(int a ,int b)
{
   int sum=a+b;
   return sum;
}
int diff(int a, int b)
{
	int diff=a-b;
	return diff;
}
int prod(int a ,int b)
{
   int prod=a*b;
   return prod;
}
int divide(int a ,int b)
{
	int divide=a/b;
	return divide;
}

int main()
{
	int choice,a,b;
	printf("Enter your choice: \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Divide \n ");
	scanf("%d",&choice);
	printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
	int s=sum(a,b);
	int d=diff(a,b);
	int p=prod(a,b);
	int f=divide(a,b);

	switch (choice)
{
case 1:
	printf("%d",s);
	break;				
case 2:
    printf("%d",d);
	break;
case 3:
    printf("%d",p);
	break;
case 4:
    printf("%d",f);
	break;			
} 
return 0;
}
