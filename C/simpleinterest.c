#include<stdio.h>
#include<math.h>
int main(){
    int p,t,si1,si2,si3;
    printf("Enter the principle and time:");
    scanf("%d\n",&p);
    scanf("%d\n",&t);
    if (t>10){
        si1=(p*t*8/100);/* If time is greater than 10 years then it will print simple interest 1.*/
        printf("%d",si1);

    }else if (t>=5 && t<10){/* If time is between 5 and 10 years then it will print simple interest 2.*/
        si2=(p*t*7/100);
        printf("%d",si2);
    }else{                 /*If time is less than 5 years then it will print simple interst 3.*/
        si3=(p*t*5/100);
        printf("%d",si3);
    }
    return 0;
}
