#include<stdio.h>
#include<string.h>

int main()
{
    char friends[10][20]={
        "Swapnali","Nisha","Bhakti","Anuja","Vijaya","Dhananjay","Mayur","Karan","Manish","Rahul"
    };
    for ( int i = 0; i <  10; i++)
    {
         for ( int j = 0; j < 10; j++)
         {
            if ( strcmp(friends[i], friends[j])>0)
            {
                char temp[20];
                strcpy(temp,friends[i]);
                strcpy(friends[i],friends[j]);
                strcpy(friends[j],temp);
            }
            
         }
         
    }

    printf("sorted friends:\n");
    for ( int  i = 0; i < 10; i++)
    {
        printf("%s\n",friends[i]);
    }
    // for ( int  j = 0; j < 10; j++)
    // {
    //     printf("%s\n",friends[j]);
    // }
    
    
    
}