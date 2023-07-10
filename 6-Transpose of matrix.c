#include<stdio.h>
int main()
{
    int arr1[50][50];
    int brr1[50][50];
    int i, j, r, c;
    printf("\n\nTranspose of matrix:\n");
    printf("----------------------------\n");
    printf("\nInput the number of rows and number of columns of the matrix: ");
    scanf("%d %d",&r,&c);
    printf("Input elementsin the first matrix :\n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    printf("Elements -[%d],[%d] : ",i,j);
                    scanf("%d",&arr1[i][j]);
                }
            
        }
    printf("\nThe matrix is :\n");
    for(i=0;i<r;i++)
        {
            printf("\n");
            for(j=0;j<c;j++)
                {
                    printf("%d\t",arr1[i][j]);
                }
        }
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    brr1[j][i]=arr1[i][j];
                }
        }
    printf("\n\nThe transpose of the matrix is: ");
    for(i=0;i<c;i++)
    {
        printf("\n");
        for(j=0;j<r;j++)
            {
                printf("%d\t",brr1[i][j]);
            }
    }
printf("\n\n");
return 0;
}
