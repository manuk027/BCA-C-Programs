#include<stdio.h>
#include<conio.h>
void main()
{
    int j,temp,arr1[50],arr2[50],size1,size2,i,k,merge[100];
    clrscr();
    printf("Enter array1 size:");
    scanf("%d",&size1);
    printf("enter array1 elements:");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
        merge[i]=arr1[i];
    }
    k=i;
    printf("\nEnter array2 size:");
    scanf("%d",&size2);
    printf("enter array2 elements:");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
        merge[k]=arr2[i];
        k++;
    }   
    printf("\nThe new array after merging is:\n");
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(merge[i]>merge[j])
            {
                temp=merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("\t%d",merge[i]);
    }
    getch();
}
