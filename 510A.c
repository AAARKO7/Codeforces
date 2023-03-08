/*Fox And Snake (510A)*/

#include<stdio.h>
 
int main()
{
    int n,m;
 
    scanf("%d%d",&n,&m);
 
    for(int i=1 ; i<=n ; i++)
    {
        if(i%2==0)
        {
            for(int j=1 ;j<=m ; j++)
            {
                int x=i/2;
                if(x%2==0)
                {
                    if(j==1)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(".");
                    }
                }
                else
                {
                    if(j==m)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(".");
                    }
                }
            }
        }
        else
        {
            for(int j=1 ; j<=m ; j++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}