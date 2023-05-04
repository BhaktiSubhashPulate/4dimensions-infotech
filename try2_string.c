#include<stdio.h>
#include<string.h>
int main()
{
    char  name[10];
    for(int i=0;i<11;i++)
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
    
    char str[]="hello bhakti";
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='h')
        {
             printf("Space is present at %d\n",i);
             break;
            str[i]='h';
        }
    }
    printf("%s",str);
    
}