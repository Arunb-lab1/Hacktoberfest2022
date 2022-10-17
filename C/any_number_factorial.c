#include<stdio.h>
int main()
{
    int i,n,p=1;
    printf("\nEnter the element: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=i*p;
    }
    printf("\nFactorial of the %d is: %d",n,p);
    return 0;
}