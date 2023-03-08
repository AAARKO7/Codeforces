/*Vanya and Fence (677A)*/

#include<stdio.h>

int main()
{
    int n,h,i,a,x=0;

    scanf("%d%d",&n,&h);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);

         if(a>h)
        {
            x+=2;
        }

        else
        {
            x++;
        }
        
    }
    
      
        printf("%d",x);
}