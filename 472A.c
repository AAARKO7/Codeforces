/*Design Tutorial: Learn from Math(472A)*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n%2==0)
    {
        if((n/2)%2==0)
        {
            printf("%d %d",n/2,n/2);
        }
        else
        {
            printf("%d %d",n/2-1,n/2+1);
        }
    }
    else
    {
        int x=n-4;

        while(1)
        {
            if(x%3==0)
            {
                printf("%d %d",x,n-x);
                break;
            }
            else if(x%5==0)
            {
                printf("%d %d",x,n-x);
                break;
            }
            else if(x%7==0)
            {
                printf("%d %d",x,n-x);
                break;
            }
            else if(x%9==0)
            {
                printf("%d %d",x,n-x);
                break;
            }
            else
            {
                x=x-2;
            }
        }
    }
}