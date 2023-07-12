#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[100], *ptr, l, t;
    clrscr();
    printf("Enter the string:");
    gets(str);
    l=strlen(str);
    ptr=str;
    printf("%c", *(ptr+0));
    for(i=0; i<1; i++)
    {
        if(*(ptr+i-1)=='')
        printf("%c", *(ptr+i));
    }
    getch();
}
