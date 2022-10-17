#include<stdio.h>
int main()
{
    int marks;
    printf("\nenter the marks of student (subject wise):");
    scanf("%d",&marks);
    if(marks >90)
    {
        printf("very good\n");
    }
    else if(marks > 60 && marks <90)
    {
        printf("good\n");
    }
    else if(marks>30 && marks <60)
    {
        printf("poor\n");
    }
    else
    {
        printf("fail\n");
    }
    printf("Thank you\n");
    return 0;
}