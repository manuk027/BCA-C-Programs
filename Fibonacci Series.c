#include<stdio.h>
int main()
{
    
int n;
int i;
int f3;
int f1=0;
int f2=1;

printf("Enter the number:");
scanf("%d",&n);

printf("The fibonnaci series:\n");
printf("%d\n%d\n",f1,f2);

for (i=3;i<=n;i++)
    {
    f3=f1+f2;
    printf("%d\n",f3);
    f1=f2;
    f2=f3;
    }

return 0;
