#include<stdio.h>
int main()
{    int a,b,c,d,e,f,cube;
    printf("Enter any 3 digit num:");
    scanf("%d",&a);
    b=a%10;
    e=a/10;
    c=e%10;
    f=e/10;
    d=f%10;
    cube=(b*b*b)+(c*c*c)+(d*d*d);
    printf("Sum of digits %d\n",cube);
    if (cube==a)
    {printf("%d is a Armstrong number",a);}
    else 
    {printf("%d is not Armstrong",a);}
return 0;
}
