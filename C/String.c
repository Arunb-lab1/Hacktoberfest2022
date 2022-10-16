//C program to count the number of vowels in a string

#include <stdio.h>
#include <string.h>
 
int main()
{
    // Initializing variable.
    char str[100];  
    int i, vowels = 0;
    
    // Accepting input.
    printf("Enter the string: ");
    // best way to read string rather than gets/fgets
    scanf("%[^\n]s",&str);
    
    //Initializing for loop. 
    for(i = 0; str[i]; i++)  
    {
        //Counting the vowels.
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||
           str[i]=='o'|| str[i]=='u'||str[i]=='A'||
           str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
            vowels++;
        }
    }
 	
    //Printing the count of vowels.
    printf("Total number of vowels: = %d\n",vowels);
    
    return 0;
}
