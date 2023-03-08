/*Anton and Danik (734A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,x=0,y=0;

    scanf("%d",&n);

    char s[n];

    for(i=0;i<=n;i++)
    {
        scanf("%c",&s[i]);
    }

    for(j=0;j<=n;j++)
    {
        if(s[j]=='A')
        {
            x++;
        }

        else if(s[j]=='D')
        {
            y++;
        }
    }

        if(x>y)
        {
            printf("Anton");
        }

        else if(y>x)
        {
            printf("Danik");
        }

        else
        {
            printf("Friendship");
        }
    

}

