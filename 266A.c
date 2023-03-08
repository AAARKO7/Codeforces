/*Stones on the Table (266A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,x=0;

    scanf("%d",&n);

    char s[n];
    scanf("%s",s);

    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            x++;
        }
    }   

    printf("%d",x);   
}