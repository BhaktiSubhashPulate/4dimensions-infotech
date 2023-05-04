#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Hello have a good day";
    char new_str[100];
    int j=0;
    
    for (int i = 0; i < strlen(str); i++)
    {
        if ( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u'||
             str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O'|| str[i]=='U')
        {

            new_str[j]=str[i];
            j++;
             
        }
    }
	printf("Consonents of string:%d",new_str);
    
    
    
}