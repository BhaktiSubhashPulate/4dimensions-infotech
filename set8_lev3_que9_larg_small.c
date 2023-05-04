#include<stdio.h>
#include<string.h>

int main()
{
     char str[] = "This is an Umbrella";
    char largest[20]="",smallest[20]="",word[20]="";
    int i,len,j=0;

    len = strlen(str);

    for(i=0;i<=len;i++){
        if(str[i]==' '||str[i] =='\0'){
            word[j]='\0';

            if(strlen(word)>strlen(largest)){
                strcpy(largest,word);
            }
            if(strlen(word)<strlen(smallest)||strlen(smallest)==0){
                strcpy(smallest,word);
            }

            j=0;
        }else{
            word[j++] = str[i];
        }
    }
    printf("The largest word is:%s\n",largest);
    printf("The smallest word is:%s\n",smallest);
    



    
    return 0;
}