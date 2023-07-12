#include<stdio.h>
#include<conio.h>
#include<math.h>
double series (int n)
{
    int i;
    double sum=0.0,ser;
    for(i=1;i<=n;i++)
    {
        ser=1/pow(i,i);
        sum+=ser;
    }
    return sum;
}
void main()
{
    int n;
    clrscr();
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("\nSum of the series is:%f",series(n));
    getch();
}
