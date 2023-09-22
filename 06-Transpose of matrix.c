#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, r, c, arr1[50][50], brr1[50][50];
    clrscr();
    printf("\n\nTranspose of matrix:\n");
    printf("----------------------------\n");
    printf("\nInput the number of rows of the matrix:");
    scanf("%d", &r);
    printf("\nInput the number of coloumns of the matrix:");
    scanf("%d", &c);
    printf("Input elementsin the first matrix :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Elements -[%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nThe matrix is :\n");
    for(i=0; i<r; i++)
    {
        printf("\n");
        for(j=0; j<c; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            brr1[j][i]=arr1[i][j];
        }
    }
    printf("\n\nThe transpose of the matrix is: ");
    for(i=0; i<c; i++)
    {
        printf("\n");
        for(j=0; j<r; j++)
        {
            printf("%d\t", brr1[i][j]);
        }
    }
    printf("\n\n");
    getch();
}
