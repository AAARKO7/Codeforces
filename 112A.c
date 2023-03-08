/*Petya and Strings (112A)*/

#include<stdio.h>
#include<string.h>
 
int main(void)
{
    char s1[110] ;
    char s2[110] ;
    int x;
   
   scanf("%s%s",&s1,&s2);
 
    strlwr(s1);
    strlwr(s2);
 
     x=strcmp(s1,s2);
 
    if(x==0)
    {
        printf("0");
    }
    else
    {
        for(int i=0 ; i<strlen(s1) ; i++)
        {
            if(s1[i]!=s2[i])
            {
                if(s1[i]>s2[i])
                {
                    printf("1");
                }
                else if(s2[i]>s1[i])
                {
                    printf("-1");
                }
                break;
            }
        }
    }
}