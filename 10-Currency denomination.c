#include<stdio.h>
#include<conio.h>
void main()
{
  int a[8]={500,100,50,20,10,5,2,1},m,temp,i;
  clrscr();
  printf(" Enterthe amount:");
  scanf("%d",&m);
  temp=m;
  for(i=0;i<8;i++)
  {
    printf("\n%d notes:%d",a[i],temp/a [i]);
    temp=temp%a[i];
  }
getch;
}
