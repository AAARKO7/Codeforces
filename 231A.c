/*Team (231A)*/

#include<stdio.h>

int main()
{
    int n,a,b,c,i,sum=0,p;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n");
         scanf("%d %d %d",&a,&b,&c);

        if(a+b+c>1)
        {
            p=1;
           sum=sum+p;
        }
        
    }
        printf("%d\n",sum);
}

        