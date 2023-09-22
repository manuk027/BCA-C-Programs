#include<stdio.h>
#include<conio.h>
void main()
{
  int i, number, r=0;
  clrscr();
  printf("Enter any positive number:");
  scanf("%d",&number);
  for(i=2; i<number-1; i++)
  {
    if (number%i==0)
    r=1;
    break;
  }
  if(r==0)
  printf("The number %d is prime", number);
  else
  printf("The number %d is not prime", number);
  getch();
}
