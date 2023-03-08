/*Word (59A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    int x=0,y=0,i;

    gets(s);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            x++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            y++;
        }
    }

    if(x>=y)
    {
        printf("%s",strlwr(s));
    }

    else if(y>x)
    {
        printf("%s",strupr(s));
    }
}