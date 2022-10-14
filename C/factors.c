#include<stdio.h>
#include<math.h>
void primefactor(int n){
    while(n%2==0){
    printf("%d\n",2);
    n=n/2;
    }
    for(int i=3;i<=n;i++){
        while(n%i==0){
            printf("%d\n",i);
            n=n/i;
}
    }
    if(n>2){
        printf("%d\n",n);
    }
    return;

}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("It's prime factors are:\n");
    primefactor(n);
    return 0;
}
