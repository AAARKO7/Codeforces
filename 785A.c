/*Anton and Polyhedrons(785A)*/

#include<stdio.h>

int main()
{
    int n;
    int sum=0;
    char s[21];

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s",s);

        if(s[0]=='T')
        {
            sum=sum+4;
        }

        else if(s[0]=='C')
        {
            sum=sum+6;
        }

        else if(s[0]=='O')
        {
            sum=sum+8;
        }

        else if(s[0]=='D')
        {
            sum=sum+12;
        }

        else if(s[0]=='I')
        {
            sum=sum+20;
        }
    }

    printf("%d",sum);
}