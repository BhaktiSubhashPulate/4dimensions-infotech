#include<stdio.h>
#include<string.h>

 char anagram(char str1[9],int len){

    for ( int i = 0; i < len+1; i++)
    {
        for ( int j = i+1; j <len; j++)
        {
            if ( j==len)
            {
                 
                str1[j]='\0';
            }
            else if ( str1[i]<str1[j])
            {
                //printf("%c<%c\n",str1[i],str1[j]);
                continue;
            }
            
            else
            {
                
                //printf("swapping: %c<%c\n",str1[i],str1[j]);
                char temp;
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
            
        }
        
    }
    //printf("%s",str1);
    return str1[9];
 }



int main()
{
   char name1[9]="ajax";
   char name2[9]="jaxa";
   int len1=strlen(name1);
   int len2=strlen(name2);
   if ( len1!=len2)
   {
    printf("Not anagram");
   }
   
   else{
    anagram(name1,len1);
    anagram(name2,len2);
    // printf("%s",name1);
    // printf("%s",name2);
    // printf("%d",strcmp(name1,name2));
    if ( strcmp(name1,name2)==0)
    {
        printf("Strings are anagrams");
    }
    else{
        printf("Strings are not anagrams");
    }
   }

   return 0;
}
    
    

