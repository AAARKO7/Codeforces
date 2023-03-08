/* Insomnia cure(148A)*/

#include<stdio.h>

int main()
{
    int k,l,m,n,d;
 
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);

    int count= d;
 
    if(k==1 || l==1 || m==1 || n==1)
    {
        printf("%d",d);
    }
    else
    {
        for(int i=1;i<=d;i++)
        {
            if((i%k!=0)&&(i%l!=0)&&(i%m!=0)&&(i%n!=0))
            {
                count--;
            }
        }
        printf("%d",count);
    }
}
