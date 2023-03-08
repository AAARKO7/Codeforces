/*Divisibility Problem (1328A)*/

#include<stdio.h>

int main()
{
    int t,i,a,b,c;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        c=a%b;
        if(c==0)
        {
            printf("%d\n",c);
        }
        else
        {
            printf("%d\n",b-c);
        }
    }
}

    

    



