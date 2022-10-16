#include<stdio.h>
int main(){

        int a ,i=1;
        printf("Enter the number you want the multiplication table of: ");
        scanf("%d", &a);


        while (i<=10){

            printf("%d * %d = %d\n",a,i,a*i);
            i=i+1;
        }
