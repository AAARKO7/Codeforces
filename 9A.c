/*Die Roll(9A)*/

#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    if(a==6 || b==6)
    {
        printf("1/6");
    }

    else if(a==5 || b==5)
    {
        printf("1/3");
    }

    else if(a==4 || b==4)
    {
        printf("1/2");
    }

    else if(a==3 || b==3)
    {
        printf("2/3");
    }

    else if(a==2 || b==2)
    {
        printf("5/6");
    }

    else if(a==1 || b==1)
    {
        printf("1/1");
    }
}