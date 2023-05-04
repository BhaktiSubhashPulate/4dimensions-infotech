#include<stdio.h>
#include<string.h>

int main()
{
//     char str[20]="refrigerater";
//     char str1[20]={'r','e','f','r','i','g','e','r','a','t','e','r','\0'};
   
//     printf("Enter the String: %s\n",strlen(str));
//    printf("Enter the String:%s\n",strlen(str1));

     char  name[20];
    for(int i=0;i<21;i++)
    {
        scanf("%c",&name);
        printf("%d",strlen(name));
    }

    int count=0;
    int i=0;
    while (1)
    {
        if ( name[i]=='\0')
        {
            break;
        }
        count++;
        i++;
    }

    printf("%d",count);
    
    char str[]="refrigerator";
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='r')
        {
             printf("Enter the length: %d\n",i);
             break;
            str[i]='r';
        }
    }
    printf("%s",str);
    
}

