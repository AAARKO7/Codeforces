/*Cards for Friends (1472A)*/

#include<stdio.h>
 
int main()
{
    int t;
 
    scanf("%d",&t);
    int w[t],h[t],n[t];
    
 
    for(int i=0;i<t;i++)
    {
        scanf("%d%d%d",&w[i],&h[i],&n[i]);
    }
    for(int i=0;i<t;i++)
    {
        int sheet=1;
        
        while (w[i]%2==0)
        {
            sheet=sheet*2;
            w[i]=w[i]/2;
        }
        while (h[i]%2==0)
        {
            sheet=sheet*2;
            h[i]=h[i]/2;
        }
        if(sheet>=n[i])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
}