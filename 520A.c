/*Pangram(520A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n;
   
    char temp;

    scanf("%d",&n);

    char s[n];

    scanf("%s",s);

    strlwr(s);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    int count=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }

    if(count==26)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }
}