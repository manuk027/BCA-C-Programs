#include<stdio.h>
#include<conio.h>

void main()
{
  int i;
  int r=0;
  int number;
  clrscr();
  
  printf("Enter any positive number:");
  scanf("%d",&number);
  
  for(i=2, i<number-1; i++)
  {
    if (n%i==0)
    r=1;
    break;
  }
  if (r==0)
  printf("The number %d is prime", number);
  else
  printf("The number %d is not prime", number);
  getch();
}
