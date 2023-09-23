#include<stdio.h>  
#include<conio.h> 
void averageofprime(int prime[], int size)
{  
  int sum=0;
  float avg;
  int i;
  for(i=0; i<size; i++)
  {
    sum+=prime[i];
  }  
  avg=(float)sum/size;
  printf("The average of prime numbers is: %.2f\n", avg);
}

void main()
{
  int range, i, k, flag, j=0, h=0, prime[100];
  clrscr();
  printf("Enter a range:");  
  scanf("%d", &range);  
  for(i=0; i<=range; i++)
  {
    if(i==1||i==0)
      continue;
    flag=1;
    for(j=2; j<=i/2; ++j)
    {
      if(i%j==0)
      {
        flag=0;
        break;
      }
    }
    if(flag==1)
    {
      printf("%d\n", i);
      prime[h]=i;
      h++;
    }
  }
  averageofprime(prime, h);
  getch();
}
