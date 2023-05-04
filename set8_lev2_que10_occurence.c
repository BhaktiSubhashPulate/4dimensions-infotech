#include<stdio.h>
#include<string.h>

int main()
{
    int i,count=0,occr1,occr2;
    char str[50],abc;

    printf("Enter a string\n");
    scanf("%s\n",str);
    printf("Enter the first occurrence string\n");
    scanf("%c",abc);

    for ( int i = 0; i < strlen(str); i++)
    {
        if ( abc==str[i])
        {
            count++;
        }
        
    }
    

    return 0;
}