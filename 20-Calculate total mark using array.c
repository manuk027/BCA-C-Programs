#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno,tot;
    char name[25];
    int mark[5];
};
void main()
{
    struct student s[5];
    int i,n,j;
    clrscr();
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("\t*Students Records*\n");
    for(i=0;i<n;i++)
    {
	printf("\nEnter student Roll Number:");
	scanf("%d",&s[i].rollno);
	printf("\nEnter Student name:");
	scanf("%s",s[i].name);
	printf("\nEnter marks of 3 subjects:");
	for(j=0;j<3;j++)
	{
	    scanf("%d",&s[i].mark[j]);
	}
    }
    for(i=0;i<n;i++)
    {
	s[i].tot=0;
	for(j=0;j<3;j++)
	s[i].tot=s[i].tot+s[i].mark[j];
    }
    for(i=0;i<n;i++)
    {
	printf("\t*Students Records*\n");
        printf("\n=======================\n");
        printf("\nStudent Rollno.-%d",s[i].rollno);
        printf("\nStudents Name-%s",s[i].name);
	printf("\nStudents total marks-%d\n",s[i].tot);
    }
    getch();
}
