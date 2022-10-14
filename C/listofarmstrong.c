#include<stdio.h>
int main(){
	int x,r,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int sum=0;
		x=i;
		while(x!=0){
			r=x%10;
			sum+=r*r*r;
			x=x/10;
		}
		if(i==sum)
			printf("%d\n",i);
		

	}
	return 0;
}
