#include <stdio.h>

int main()
{
    char s[1000];  
    int  i,j,count=0,size;
    printf("Enter the string: ");
    gets(s);
    size=strlen(s);
	printf("Character counts in string are:\n");
	
    for(i=0;i<size;i++)  
    {
     	count=1;
    	if(s[i])
    	{
 		  for(j=i+1;j<size;j++)  
	      {   
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",s[i],count);
       }
 	} 
 	 
    return 0;
}
