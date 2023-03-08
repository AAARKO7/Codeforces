/*Mishka and Game (703A)*/

#include<stdio.h>

int main()
{   
    int n,c,m,i;
    int csum=0,msum=0;

    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&m,&c);

        if(m>c)
        {
            msum++;
        }

        else if(c>m)
        {
            csum++;
        }
    }

        if(msum>csum)
        {
            printf("Mishka");
        }

        else if(csum>msum)
        {
            printf("Chris");
        }
        
        else
        {
            printf("Friendship is magic!^^");
        }
}

