#include<stdio.h>

int main()
{
     int arr[10];
     int sum=0;
     int product=1;
     for(int i=0;i<10;i++)
     {
        scanf("%d",&arr[i]);
        printf("Sum of array:");
     }

     for(int i=0;i<10;i++)
     {
        sum=sum+arr[i];
        printf("product of array:%d\n",product);
     }



    return 0;
}