#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    clrscr();
    system("cls");
    printf("Enter the number of row: ");
    scanf("%d",&r);
    printf("Enter the number of column: ");
    scanf("%d",&c);
    printf("enter first matrix =\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
            scanf("%d",&a[i][j]); 
        }
    }
    printf("Enter second matrix element: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Product of two matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    getch(); 
}
