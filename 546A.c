/*Soldier and Bananas (546A)*/

#include<stdio.h>
#include<string.h>

int main()
{
    
    int k,n,w,i,x,y=0,z;

    scanf("%d %d %d",&k,&n,&w);

    for(i=0;i<=w;i++)
    {
        x=k*i;
        y=y+x;

    }

    z=y-n;

    if(z>0)
    {
        printf("%d",z);
    } 

    else
    {
        printf("0");
    }
}