/*Boy or Girl (236A)*/

#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[101];
    int x,i,j,k;
    gets(s);
 
    x=strlen(s);
 
    for(i=0; i<x; i++)
    {
        for(j=i+1; j<x; j++)
        {
            if (s[i] == s[j])
            {
                for(k=j; k<x; k++)
                {
                    s[k] = s[k+1];
                }
                j--;
                x--;
            }
        }
    }
 
    if (x%2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
}