/*Translation (41A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[101],t[101];
    int i,x=0;

    scanf("%s",s);
    scanf("%s",t);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=t[strlen(t)-i-1])
        {
            x++;
        }
    }

    if(x==0)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }
}