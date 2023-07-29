#include<stdio.h>
#include<string.h>
#include<conio.h>
void main() 
{
	int f, let, length, i; 
	char s[15];
	clrscr();
	printf("Enter a String: ");
	scanf("%[^\n]s", s);
	f = s[0];
	printf("The short form is %c", f);
	for (i = 1;s[i]!='\0'; i++) 
	{
		if (s[i] == ' ') 
		{ 
			let = s[i + 1];
			printf("%c",let);
		}
	}
	getch(); 
}
