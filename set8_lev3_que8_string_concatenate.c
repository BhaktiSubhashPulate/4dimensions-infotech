#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Hello";
    char str1[]="World";
    char str2[50];
    int len=strlen(str)+strlen(str1);
    int j=0;
    for ( int i = 0; i <  len; i++)
    {
        if ( i<strlen(str))
        {
            str2[i]=str[i];
        }
        else if ( i>strlen(str))
        {
            str2[i]=str1[j];
            //printf("%c\n",str2[i]);
            j++;
            if ( j==strlen(str1))
            {
                str2[i+1]='\0';
            }
            
        }
        
        
    }
    printf("%s\n",str2);
    printf("%s",str1);
    
    
    return 0;
}