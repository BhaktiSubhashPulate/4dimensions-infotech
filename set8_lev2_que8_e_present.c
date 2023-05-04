#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Umbrella";
    for ( int i = 0; i <  strlen(str); i++)
    {
        if ( str[i]=='e')
        {
          printf("There 'e' is present....\n");
        }
        
         
    }
    
    return 0;
}