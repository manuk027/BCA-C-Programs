#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
  char s[30],r[30];
  int i=0,l,j;
  clrscr();
  printf("\nEnter the string: ");
  scanf("%s",&s);
  l=strlen(s);
  for(j=l-1;j>=0;j--)
  {
    r[i]=s[j];
    i++;
  }
  if(strcmp(s,r)==0)
  {
    printf("\nThe given string is palindrome");
  }
  else
  {
    printf("\nThe given string is not palindrome");
  }
  getch();
}
