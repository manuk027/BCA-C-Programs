#include<stdio.h>
#include<string.h>
void main()
{
  char s[30],r[30];
  int i=0,l,j;
  clrscr();
  printf("\n Enter the string: ");
  scanf("%s",&s);
  l=strlen(s);
  for(j=l-1;j>=0;j--)
  {
    r[i]=s[j];
    i++;
  }
  if(stricmp(s,r)==0)
  {
    printf("\nThe given string is pallindrome");
  }
  else
  {
    printf("\nThe given string is not pallindrome");
  }
  getch();
}
