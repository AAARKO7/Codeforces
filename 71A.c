/*Way Too Long Words (71A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,x,y;
    char s[100];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&s);

        x=strlen(s);

        if(strlen(s)>10)
        {
            y=x-2;
            printf("%c%d%c",s[0],y,s[strlen(s)-1]);
        }

        else
        {
            printf("%s",s);
        }

        printf("\n");
        
    }

}