/*Ultra-Fast Mathematician (61A)*/

#include<stdio.h>
#include<string.h>

int main()
{   
    int i;
    char n[101], m[101];

    gets(n);
    gets(m);

    for(i=0;i<strlen(n);i++)
    {
        if(n[i]!=m[i])
        {
            printf("1");
        }

        else
        {
            printf("0");
        }
    }
    
}