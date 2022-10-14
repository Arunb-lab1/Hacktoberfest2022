#include <stdio.h>
#include <string.h>
void sort(char str[],int l){
    char i,j,t;
    for(i=0;i<l;i++){
        for(j=0;j<l-1-i;j++){
            if(str[j]>str[j+1])
            {
                t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }

}

void  main(int argc,char **argv){
    char* str=argv[1];
    int l=strlen(str);
    sort(str,l);

    int i,j,c=0; char ch;
    for(i=0;i<l;i++){
        j=i;
        ch=str[i];
        while (ch==str[j]){
            c++;
            j++;
        }
        printf("%c : %d times\n",ch,c);
        
        i+=c-1;
        c=0;
           

    }
}