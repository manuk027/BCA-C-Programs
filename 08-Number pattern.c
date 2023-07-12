#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    clrscr();
    printf("Number pattern");
    printf("\nEnter a number of rows:");
    scanf("%d",&n);
    for(i=10; i<n; i*=10);
    for(i=i/10; n>0; i/=10)
    {
        printf("%d\n", n);
        n%=i;
    }
    getch();
}
