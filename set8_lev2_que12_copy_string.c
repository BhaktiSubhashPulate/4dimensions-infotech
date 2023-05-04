#include<stdio.h>
#include<string.h>

int main()
{
    char line[]="Robert Brett Roser";
   char word[]="Robert";
   char word1[]="Brett";
   char *result;
   char *result1;
    
    int  len_word=strlen(word);
    result=strstr(line,word);
    int len_word1=strlen(word1);
    result1=strstr(line,word1);

     for ( int i=0;i<strlen(line);i++)
     {
        if ( line[i]==' ')
        {
            line[i]='.';
        }
        
     }
     while ( (result=strstr(line,word)) != NULL)
     {
        memmove(result+1,result+len_word,strlen(result+len_word)+1);
     }
     

     while ( (result1=strstr(line,word1)) != NULL)
     {
        memmove(result1+1,result1+len_word1,strlen(result1+len_word1)+1);
     }
     

     
    printf("%s\n",line);
    //printf("%d\n",strlen(line));
   // printf("%c.%c.%s",line[0], line[5],line);
}