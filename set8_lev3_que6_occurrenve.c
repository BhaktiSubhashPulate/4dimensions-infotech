#include<stdio.h>
#include<string.h>

int main()
{
     char str[]="This is Umbrella";
     for ( int i = 0; i <  strlen(str); i++)
     {
        if ( str[i]=='e')
        {
            printf("There 'e' is present....\n");
        }
        if ( str[i]==' ')
        {
            if ( str[i+1]=='i')
            {
                if ( str[i+2]=='s')
                {
                    printf("There 'is' is present....\n ");
                }
                
            }
            
        }
        

        
     }
     

    

}