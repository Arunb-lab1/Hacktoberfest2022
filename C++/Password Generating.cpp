#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#define sizeconst 10
#define numberOfPasswords 1000000
int main()
{
    char name[sizeconst],password[11];
    srand(time(0));                                                 /// Is used to randomize the passwords each time i run
    printf("Please enter your name\n");
    fflush(stdin);
    fgets(name,sizeconst,stdin);
    name[strlen(name)-1]= (char) NULL;                              ///set the last index to null to prevent \n
    char tempnums[sizeconst];                                       ///set a string of numbers
    int nums;                                                       ///an integer used to get  random numbers
    int powertemp= pow(sizeconst,sizeconst-strlen(name)) - 1;
    int powertemp2= (pow(sizeconst,9-strlen(name)));
    for(int m=0;m<numberOfPasswords;m++)        ///main loop
    {
        nums=rand()%(powertemp - powertemp2 + 1) + powertemp2;      ///gets the random numbers
        itoa(nums,tempnums,sizeconst);                              ///switches integers to a string
        strcpy(password,name);                                      ///copying the name to the password string
        strcat(password,tempnums);                                  ///concatenate numbers with name
        for(int k=0; k<sizeconst; k++)                              ///loop to shuffle the characters within the password
        {
            int random= rand()%sizeconst;                           ///gets a random number
            char temp = password[random];                           ///swap the character of i with the character of random
            password[random]=password[k];
            password[k]= temp;
        }
        printf("%d- %s\n",m+1,password);
        memset(tempnums,'\0',11-strlen(name));                      ///clears out the numbers string to use again in the loop
        memset(password,'\0',11);                                   ///clears out the password string to use again in the loop
    }
    return 0;
}
