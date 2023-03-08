/*Sum (1742A)*/

#include<stdio.h>

int main()
{
    int n,a,b,c,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a+b==c || b+c==a || c+a==b)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }

    
      
}
