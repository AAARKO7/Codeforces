/*Minutes Before the New Year (1283A)*/

#include<stdio.h>
#include<math.h>

int main()
{
    int t,h,m,i,k,l;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d %d",&h,&m);
        
        k=1440-((h*60)+m);

        printf("%d",k);

        printf("\n");
          
    }   
}
