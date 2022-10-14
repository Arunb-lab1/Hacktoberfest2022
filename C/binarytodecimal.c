#include<stdio.h>

int binarytodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
    }
int main(){
    int n;
    printf("Enter the binary number:");
    scanf("%d",&n);
    int binarytodecimal(int n);
    printf("Decimal number is:%d\n",binarytodecimal(n));
    return 0;
}
