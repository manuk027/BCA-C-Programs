#include<stdio.h>
#include<conio.h>
void main()
{
    int r, s, t=0, rows=0;
    clrscr();
    printf("Enter the number of rows to print the pyramid:");
    scanf("%d", &rows);
    printf("\nThe pyramid with %d rows are printed\n\n\n\n", rows);
    for(r=1; r<=rows; ++r, t=0)
    {
        for(s=1; s<=rows-r; ++s)
        {
            printf(" ");
        }
        while(t!=2*r-1)
        {
            printf("*");
            ++t;
        }
        printf("\n");
    }
    getch();
}
