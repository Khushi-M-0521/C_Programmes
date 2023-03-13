#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 100000
#define max 60

typedef struct list
{
    char *s;
}List;

int n;
List l[0];

void input()
{
    int i,j;

    printf("Enter the number of strings: ");
    scanf("%d",&n);
    if(n>N)
    {
        printf("Too Large.\n");
        exit(0);
    }
   
    printf("Enter the strings: \n");
   
    for(i=0;i<n;i++)
    {  
        l[i].s=(char *)malloc(max*sizeof(char));
        
        scanf("%s",l[i].s);
        l[i].s=(char *)realloc(l[i].s,(strlen(l[i].s)+1)*sizeof(char));
        
        for(j=0;j<strlen(l[i].s);j++)
            if((l[i].s)[j]<'a' || (l[i].s)[j]>'j')
            {
                printf("Invalid string: String must contain only 'a'-'j'\n");
                exit(0);
            }
    }
}

void Sort()
{
    int i,j,min;
    char *temp;
    
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(strlen(l[min].s) > strlen(l[j].s))
                min=j;
        }
    
        temp=(char *)malloc((strlen(l[min].s) + 1) * sizeof(char));
        strcpy( temp, l[min].s);
        l[min].s=(char *)realloc(l[min].s,(strlen(l[i].s)+1)*sizeof(char));
        strcpy( l[min].s, l[i].s);
        l[i].s=(char *)realloc(l[i].s,(strlen(temp)+1)*sizeof(char));
        strcpy( l[i].s, temp);
    
        free(temp);
    }
}

void noPrefix(List *words)
{
    int i,j;
    for( i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(  strncmp(words[i].s, words[j].s, (int)strlen(words[i].s)) ==0)
            {
                printf("\nBAD SET\n\n");
                free(words);
                return;
            }
    printf("\nGOOD SET\n\n");
    free(words);
}

void main()
{
    input();
    Sort();
    noPrefix(l);
}