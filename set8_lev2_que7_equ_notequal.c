#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Hello";
    char str1[]="World";

    if ( strcmp(str,str1)==0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    
    return 0;
}