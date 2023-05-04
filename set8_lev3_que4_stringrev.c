#include<stdio.h>
#include<string.h>

 

 /*with strrev */
 int main()
 {
      char str[5]="Hello";
      char str1[5];
      int len = strlen(str);
      int j=0;

      for ( int i = len-1; i >=0; i--)
      { 
        //printf("%c",str[i]);
        str1[j]=str[i];
        //printf("%c",str1[j]);
        j++;
        if (j==5 )
        {
          str1[j]='\0';
          break;
        }
        
      }
      printf("%s",str1);

     return 0;
 }

 