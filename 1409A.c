/*Yet Another Two Integers Problem (1409A)*/

#include<stdio.h>
#include<math.h>

int main()
{
    int t,a,b,i;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);

        int x=abs(a-b);

        if(x==0)
        {
            printf("%d\n",x);
        }

        else if(x%10==0)
        {
            printf("%d\n",x/10);
        }

        else
        {
            printf("%d\n",x/10+1);
        }

    }

}