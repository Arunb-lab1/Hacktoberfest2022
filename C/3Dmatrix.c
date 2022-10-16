#include <stdio.h>
int main()
{
    int A[4][4],B[4][4],C[4][4],D[4][4];
    int r,c,i,j;
    printf("First matrix \n");
    printf("Enter number of rows (less than 4) : ");
    scanf("%d",&r);
    printf("Enter number of columns (less than 4) : ");
    scanf("%d",&c);
    printf("Enter elements of %dx%d matrix by giving space between them: \n",r,c);
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        scanf("%d",&A[i][j]);    
    }
    printf("SECOND MATRIX \n");
    printf("Enter number of rows (less than 4) : ");
    scanf("%d",&r);
    printf("Enter number of columns (less than 4) : ");
    scanf("%d",&c);
    printf("Enter elements of %dx%d matrix by giving space between them: \n",r,c);
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
            scanf("%d",&B[i][j]);
    }
    printf("FOR THIRD MATRIX \n");
    printf("Enter the number of rows (less than 4) : ");
    scanf("%d",&r);
    printf("Enter number of columns (less than 4) : ");
    scanf("%d",&c);
    printf("Enter elements of %dx%d matrix by giving space between them: \n",r,c);
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
            scanf("%d",&C[i][j]);
    }
    printf("Sum of matrices : \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
           { D[i][j] = A[i][j] + B[i][j] + C[i][j];
            printf("%d ", D[i][j]);}
        printf("\n");
    }
}
