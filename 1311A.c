/*Add Odd or Subtract Even (1311A)*/

#include<stdio.h>

int main()
{
    int t,a,b,i,x;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);

        x=a-b;
        
        if(x==0)
        {
            printf("0\n");
        }
        else if(x>0)
        {
            if(x%2==0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
        else
        {
            if(x%2==0)
            {
                printf("2\n");
            }
            else
            {
                printf("1\n");
            }
        }
 
    }
}