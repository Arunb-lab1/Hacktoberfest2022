#include <string.h>
 
int main()
{
    char str[50];  
    int i,n,f=0;
 
    printf("Enter  the string : ");
    gets(str);
    n=strlen(str);
 
    for(i=0;i<n/2;i++)  
    {
    	if(str[i]==str[n-i-1])
    	f++;
 	}
 	if(f==i)
 	    printf("palindrome");
    else
        printf("Not palindrome");

    return 0;
}