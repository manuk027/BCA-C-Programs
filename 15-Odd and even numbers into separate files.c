#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE*fp1,*fp2;
    int i, n, num;
    clrscr();
    printf("Enter the size:");
    scanf("%d", &n);
    printf("\nEnter %d numbers:\n", n);
    fp1=fopen("even", "wb");
    fp2=fopen("odd", "wb");
    if (fp1==NULL||fp2==NULL)
    {
        printf("Erroe opening file\n");
        getch();
        exit(1);
    }
    for (i=0; i<n; i++)
    {
        scanf("%d", &num);
        if(num%2==0)
        {   
            putw(num, fp1);
        }
        else
        {
            putw(num, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    printf("\nEven numbers");
    fp1=fopen("even", "rb");
    if(fp1==NULL)
    {
        printf("Error opening file\n");
        getch();
        exit(1);
    }
    while(1)
    {
        num=getw(fp1);
        if(feof(fp1))
        break;
    printf("\n%d", num);
    }
    printf("\nOdd Numbers");
    fp2=fopen("odd", "rb");
    if(fp2==NULL)
    {
        printf("Error opening file\n");
        getch();
        exit(1);
    }
    while(1)
    {
        num=getw(fp2);
        if(feof(fp2))
        break;
        printf("\n%d", num);
    }
    fclose(fp1);
    fclose(fp2);
    getch();
}
