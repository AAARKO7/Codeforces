/*Bear and Big Brother (791A)*/

#include<stdio.h>

int main()
{
    int a,b;
    int i=0;

    scanf("%d%d",&a,&b);

    while(a<b || a==b)
    {
        i++;

        a=a*3;
        b=b*2;
    }

        printf("%d",i);
}