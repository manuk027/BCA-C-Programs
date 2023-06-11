#include<stdio.h>
int main()
{
	int num;
	int d;
	int sum=0;
	int rev=0;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	while(num > 0)
	{
		d=num % 10;
		sum=sum+d;
		num=num/10;
		rev=(rev*10)+d;
		
	}
	printf("\nSum of the digits of the given number:%d \n", sum);
	
	printf("Reverse of the give number is: %d" ,rev);

	return 0;
}
