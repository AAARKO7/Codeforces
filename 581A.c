/*Vasya the Hipster(581A)*/

#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    int x=(a-b)/2;
    int y=(b-a)/2;
    
    if(a>b)
    {
        printf("%d %d\n",b,x);
    }

    else
    {
        printf("%d %d\n",a,y);
    }
}