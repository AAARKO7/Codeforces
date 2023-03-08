/*New year and Harry (750A)*/

#include<stdio.h>

int main()
{
    int n,k,x;
    int i=0,y=0;

    scanf("%d%d",&n,&k);

    x=240-k;

    while(y+(i+1)*5<=x && i<n)
    {
        i++;

        y=y+(5*i);
    }

    printf("%d",i);

}