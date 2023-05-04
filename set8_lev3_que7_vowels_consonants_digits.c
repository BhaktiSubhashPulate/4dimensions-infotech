#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Hello have a good day";
    char consonant_str[50];
    char vowel_str[50];
    char digit_str[50];
    char space_str[50];
    int consonant=0;
    int vowel=0;
    int digit=0;
    int space=0;
    char new_str[50];
 
     int j=0;
    
    for (int i = 0; i < strlen(str); i++)
    {
        if ( str[i]>'A' && str[i]<='Z' || str[i]>'a' && str[i]<='z')
        {
             new_str[j]=str[i];
        
        
              if ( str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u'|| str[i]=='y'||str[i]=='w'||
                 str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O'|| str[i]=='U' ||str[i]=='Y'||str[i]=='W')
             {
                vowel++;
             
             }
             else
             {
                consonant++;
             }
       }
             else if ( str[i] >= '0' && str[i]<='9') 
             {
              
             digit++;
             }

             else
            {
             
              space ++;
            }
    }
        
    
    printf("vowels:%d\n",vowel);
	printf("Consonants:%d\n",consonant);
    printf("Digit:%d\n",digit);
    printf("Space:%d",space);
}