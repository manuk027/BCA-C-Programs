#include<stdio.h>
#include<conio.h>
void main()
{
  int num, d, sum=0, rev=0;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  while(num>0)
  {
    d=num%10;
    sum=sum+d;
    num=num/10;
    rev=(rev*10)+d;	
  }
  printf("\nSum of the digits of the given number:%d \n", sum);
  printf("Reverse of the given number is: %d" ,rev);
  getch();
}
