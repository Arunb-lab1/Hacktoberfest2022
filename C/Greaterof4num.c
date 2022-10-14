include<stdio.h>
int main()
{
  int a,b,c,d;
   printf("Enter any Four Numbers: "); 
   scanf("%d %d %d %d",&a,&b,&c,&d); 
        if(a>b) 
        { if(a>c) 
        {if(a>d) 
        printf("%d is greater",a);  
        else 
        printf("%d is greater",d); 
        } 
         } 
       else if(b>c) 
       {if(b>d) 
       printf("%d is greater",b);
        else
        printf("%d is greater",d);  
         } 
        else if(c>d) 
        printf("%d is greater",c);
        else 
        printf("%d is greater",d); 
        return 0;             
}
Footer
