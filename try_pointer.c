#include<stdio.h>

int main()
{
    int x;
     int *b;
     b=&x;
     printf("Enter the number:");
     scanf("%d\n",&x);
     printf("%d\n",&*b);
     printf("%d",&b);

    return 0;
} 