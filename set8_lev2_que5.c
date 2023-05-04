#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10]="Swapnali";
    int j;//=0;
    char *ptr;
    ptr = &j;
    printf("Enter the string:%s\n",str1);
    printf("length of the string:%d\n",strlen(str1));
    
    for ( int  i = 0; i <strlen(str1); i++)
    {
        printf("%c",ptr);
    }
    


}