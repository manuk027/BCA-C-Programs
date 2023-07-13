#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,t,c,d,s=0;
    clrscr();
    printf("\nEnter the range from 0 to: ");
    scanf("%d",&n);
    printf("\nArmstrong Numbers are: ");
    for(i=0;i<=n;i++)
    {
        t=i;
        s=0;
        while(t!=0)
        {
            d=t%10;
            c=d*d*d;
            s=s+c;
            t=t/10;
        }
        if(s==i)
        printf("\n%d",i);
    }
    getch();
}
